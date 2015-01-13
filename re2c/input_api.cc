#include <sstream>

#include "globals.h"
#include "indent.h"
#include "input_api.h"

namespace re2c
{

void InputAPI::set (type_t t)
{
	type = t;
}

std::string InputAPI::expr_peek ()
{
	std::string s;
	switch (type)
	{
		case DEFAULT:	s = "*" + mapCodeName["YYCURSOR"]; break;
		case ISTREAM:	s = mapCodeName["YYCURSOR"] + ".peek ()"; break;
		case CUSTOM:	s = mapCodeName["YYPEEK"] + " ()"; break;
	}
	return s;
}

std::string InputAPI::expr_peek_save ()
{
	return mapCodeName["yych"] + " = " + yychConversion + expr_peek ();
}

std::string InputAPI::stmt_peek (uint ind)
{
	return indent (ind) + expr_peek_save () + ";\n";
}

std::string InputAPI::stmt_skip (uint ind)
{
	std::string s;
	switch (type)
	{
		case DEFAULT:	s = "++" + mapCodeName["YYCURSOR"]; break;
		case ISTREAM:	s = mapCodeName["YYCURSOR"] + ".ignore ()"; break;
		case CUSTOM:	s = mapCodeName["YYSKIP"] + " ()"; break;
	}
	return indent (ind) + s + ";\n";
}

std::string InputAPI::stmt_backup (uint ind)
{
	std::string s;
	switch (type)
	{
		case DEFAULT:	s = mapCodeName["YYMARKER"] + " = " + mapCodeName["YYCURSOR"]; break;
		case ISTREAM:	s = mapCodeName["YYMARKER"] + " = " + mapCodeName["YYCURSOR"] + ".tellg ()"; break;
		case CUSTOM:	s = mapCodeName["YYBACKUP"] + " ()"; break;
	}
	return indent (ind) + s + ";\n";
}

std::string InputAPI::stmt_backupctx (uint ind)
{
	std::string s;
	switch (type)
	{
		case DEFAULT:
			// backward compatibility: '+1' here instead of '++YYCURSOR;' in stmt_restorectx
			s = mapCodeName["YYCTXMARKER"] + " = " + mapCodeName["YYCURSOR"] + " + 1";
			break;
		case ISTREAM:	s = mapCodeName["YYCTXMARKER"] + " = " + mapCodeName["YYCURSOR"] + ".tellg ()"; break;
		case CUSTOM:	s = mapCodeName["YYBACKUPCTX"] + " ()"; break;
	}
	return indent (ind) + s + ";\n";
}

std::string InputAPI::stmt_restore (uint ind)
{
	std::string s;
	switch (type)
	{
		case DEFAULT:	s = mapCodeName["YYCURSOR"] + " = " + mapCodeName["YYMARKER"]; break;
		case ISTREAM:	s = mapCodeName["YYCURSOR"] + ".seekg (" + mapCodeName["YYMARKER"] + ")"; break;
		case CUSTOM:	s = mapCodeName["YYRESTORE"] + " ()"; break;
	}
	return indent (ind) + s + ";\n";
}

std::string InputAPI::stmt_restorectx (uint ind)
{
	std::string s;
	switch (type)
	{
		case DEFAULT:
			// backward compatibility: 'no ++YYCURSOR;' here; instead '+1' in stmt_backupctx
			s = mapCodeName["YYCURSOR"] + " = " + mapCodeName["YYCTXMARKER"]; 
			return indent (ind) + s + ";\n";
		case ISTREAM:	s = mapCodeName["YYCURSOR"] + ".seekg (" + mapCodeName["YYCTXMARKER"] + ")"; break;
		case CUSTOM:	s = mapCodeName["YYRESTORECTX"] + " ()"; break;
	}
	return indent (ind) + s + ";\n" + stmt_skip (ind);
}

std::string InputAPI::stmt_skip_peek (uint ind)
{
	return type == DEFAULT
		? indent (ind) + mapCodeName["yych"] + " = " + yychConversion + "*++" + mapCodeName["YYCURSOR"] + ";\n"
		: stmt_skip (ind) + stmt_peek (ind);
}

std::string InputAPI::stmt_skip_backup (uint ind)
{
	return type == DEFAULT
		? indent (ind) + mapCodeName["YYMARKER"] + " = ++" + mapCodeName["YYCURSOR"] + ";\n"
		: stmt_skip (ind) + stmt_backup (ind);
}

std::string InputAPI::stmt_backup_peek (uint ind)
{
	return type == DEFAULT
		? indent (ind) + mapCodeName["yych"] + " = " + yychConversion + "*(" + mapCodeName["YYMARKER"] + " = " + mapCodeName["YYCURSOR"] + ");\n"
		: stmt_backup (ind) + stmt_peek (ind);
}

std::string InputAPI::stmt_skip_backup_peek (uint ind)
{
	return type == DEFAULT
		? indent (ind) + mapCodeName["yych"] + " = " + yychConversion + "*(" + mapCodeName["YYMARKER"] + " = ++" + mapCodeName["YYCURSOR"] + ");\n"
		: stmt_skip (ind) + stmt_backup (ind) + stmt_peek (ind);
}

std::string InputAPI::expr_has_one ()
{
	return type == DEFAULT
		? mapCodeName["YYLIMIT"] + " <= " + mapCodeName["YYCURSOR"]
		: expr_has (1);
}

std::string InputAPI::expr_has (uint n)
{
	std::ostringstream s;
	switch (type)
	{
		case DEFAULT:	s << "(" << mapCodeName["YYLIMIT"] << " - " << mapCodeName["YYCURSOR"] << ") < " << n; break;
		case ISTREAM:	s << "(" << mapCodeName["YYLIMIT"] << " - " << mapCodeName["YYCURSOR"] << ".tellg ()) < " << n; break;
		case CUSTOM:	s << mapCodeName["YYHAS"] << " (" << n << ")"; break;
	}
	return s.str ();
}

} // end namespace re2c
