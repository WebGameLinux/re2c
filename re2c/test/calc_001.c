/* Generated by re2c */
#line 1 "calc_001.re"
/* re2c lesson 001_upn_calculator, calc_001, (c) M. Boerger 2006 - 2007 */
#line 43 "calc_001.re"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int scan(char *s, int l)
{
	char *p = s;
	char *q = 0;
#define YYCTYPE         char
#define YYCURSOR        p
#define YYLIMIT         (s+l)
#define YYMARKER        q
#define YYFILL(n)
	
	for(;;)
	{

#line 24 "calc_001.c"
		{
			YYCTYPE yych;
			if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
			yych = *YYCURSOR;
			switch (yych) {
			case 0x00:	goto yy2;
			case '+':	goto yy6;
			case '-':	goto yy8;
			case '0':	goto yy10;
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy12;
			default:	goto yy4;
			}
yy2:
			++YYCURSOR;
#line 67 "calc_001.re"
			{ printf("EOF\n");	return 0; }
#line 49 "calc_001.c"
yy4:
			++YYCURSOR;
#line 68 "calc_001.re"
			{ printf("ERR\n");	return 1; }
#line 54 "calc_001.c"
yy6:
			++YYCURSOR;
#line 65 "calc_001.re"
			{ printf("+\n");	continue; }
#line 59 "calc_001.c"
yy8:
			++YYCURSOR;
#line 66 "calc_001.re"
			{ printf("-\n");	continue; }
#line 64 "calc_001.c"
yy10:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy14;
			default:	goto yy11;
			}
yy11:
#line 64 "calc_001.re"
			{ printf("Num\n");	continue; }
#line 83 "calc_001.c"
yy12:
			++YYCURSOR;
			yych = *YYCURSOR;
			goto yy18;
yy13:
#line 63 "calc_001.re"
			{ printf("Num\n");	continue; }
#line 91 "calc_001.c"
yy14:
			++YYCURSOR;
			if (YYLIMIT <= YYCURSOR) YYFILL(1);
			yych = *YYCURSOR;
			switch (yych) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy14;
			default:	goto yy16;
			}
yy16:
#line 62 "calc_001.re"
			{ printf("Oct\n");	continue; }
#line 112 "calc_001.c"
yy17:
			++YYCURSOR;
			if (YYLIMIT <= YYCURSOR) YYFILL(1);
			yych = *YYCURSOR;
yy18:
			switch (yych) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy17;
			default:	goto yy13;
			}
		}
#line 69 "calc_001.re"

	}
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		return scan(argv[1], strlen(argv[1]));
	}
	else
	{
		fprintf(stderr, "%s <expr>\n", argv[0]);
		return 1;
	}
}
