/* Generated by re2c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define	BSIZE	8192


enum ScanContition {
	EStateNormal,
	EStateComment,
	EStateSkiptoeol,
	EStateString,
};


typedef struct Scanner
{
	FILE			    *fp;
	unsigned char	    *cur, *tok, *lim, *eof;
	unsigned char 	    buffer[BSIZE];
	unsigned char       yych;
	enum ScanContition  cond;
	int                 state;
} Scanner;

size_t fill(Scanner *s, size_t len)
{
	size_t got = ~0, cnt;

	if (!s->eof && s->lim - s->tok < len)
	{
		if (s->tok > s->buffer)
		{
			cnt = s->tok - s->buffer;
			memcpy(s->buffer, s->tok, s->lim - s->tok);
			s->tok -= cnt;
			s->cur -= cnt;
			s->lim -= cnt;
			cnt = &s->buffer[BSIZE] - s->lim;
		}
		else
		{
			cnt = BSIZE;
		}
		if ((got = fread(s->lim, 1, cnt, s->fp)) != cnt)
		{
			s->eof = &s->lim[got];
		}
		s->lim += got;
	}
	if (s->eof && s->cur + len > s->eof)
	{
		return ~0; /* not enough input data */
	}
	return got;
}

size_t init(Scanner *s)
{
	s->cur = s->tok = s->lim = s->buffer;
	s->eof = 0;
	s->cond = EStateNormal;
	s->state = -1;

	return fill(s, 0);
}

void fputl(const char *s, size_t len, FILE *stream)
{
	while(len-- > 0)
	{
		fputc(*s++, stream);
	}
}

void scan(Scanner *s)
{
	s->tok = s->cur;

	switch (s->state) {
	default: goto yy0;
	case 0: goto yyFillLabel0;
	case 1: goto yyFillLabel1;
	case 2: goto yyFillLabel2;
	case 3: goto yyFillLabel3;
	}
	for(;;)
	{
		s->tok = s->cur;

		{

			static void *yyctable[4] = {
				&&yyc_Normal,
				&&yyc_Comment,
				&&yyc_Skiptoeol,
				&&yyc_String,
			};
yy0:
			goto *yyctable[s->cond];
/* *********************************** */
yyc_Comment:
			s->state = 0;(0);
			if ((s->lim - s->cur) < 2) if (fill(s, 2) == ~0) break;
yyFillLabel0:
			s->yych = *s->cur;
			if (s->yych == '*') goto yy5;
			++s->cur;
yy4:
			continue;
yy5:
			s->yych = *++s->cur;
			if (s->yych != '/') goto yy4;
			++s->cur;
			s->cond = EStateNormal;(EStateNormal);
			continue;
/* *********************************** */
yyc_Normal:
			s->state = 1;(1);
			if ((s->lim - s->cur) < 4) if (fill(s, 4) == ~0) break;
yyFillLabel1:
			s->yych = *s->cur;
			{
				static void *yytarget[256] = {
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy12, &&yy10, &&yy10, &&yy10, &&yy10, &&yy14,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy15,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy16,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10,
					&&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10, &&yy10
				};
				goto *yytarget[s->yych];
			}
yy10:
			++s->cur;
yy11:
			fputc(s->cur[-1], stdout);
			continue;
yy12:
			++s->cur;
			s->cond = EStateString;(EStateString);
			fputc(s->cur[-1], stdout);
			continue;
yy14:
			s->yych = *(s->tok = ++s->cur);
			if (s->yych == '"') goto yy17;
			if (s->yych == '\\') goto yy19;
			goto yy11;
yy15:
			s->yych = *++s->cur;
			if (s->yych == '*') goto yy20;
			if (s->yych == '/') goto yy22;
			goto yy11;
yy16:
			s->yych = *(s->tok = ++s->cur);
			if (s->yych == '?') goto yy24;
			goto yy11;
yy17:
			s->yych = *++s->cur;
			if (s->yych == '\'') goto yy25;
yy18:
			s->cur = s->tok;
			goto yy11;
yy19:
			s->yych = *++s->cur;
			if (s->yych == '"') goto yy27;
			goto yy18;
yy20:
			++s->cur;
			s->cond = EStateComment;(EStateComment);
			continue;
yy22:
			++s->cur;
			s->cond = EStateSkiptoeol;(EStateSkiptoeol);
			continue;
yy24:
			s->yych = *++s->cur;
			{
				static void *yytarget[256] = {
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy28, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy30,
					&&yy32, &&yy34, &&yy18, &&yy18, &&yy18, &&yy36, &&yy18, &&yy38,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy40, &&yy42, &&yy44, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18,
					&&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18, &&yy18
				};
				goto *yytarget[s->yych];
			}
yy25:
			++s->cur;
			fputl("'\"'", 3, stdout);
			continue;
yy27:
			s->yych = *++s->cur;
			if (s->yych == '\'') goto yy25;
			goto yy18;
yy28:
			++s->cur;
			fputc('|', stdout);
			continue;
yy30:
			++s->cur;
			fputc('^', stdout);
			continue;
yy32:
			++s->cur;
			fputc('[', stdout);
			continue;
yy34:
			++s->cur;
			fputc(']', stdout);
			continue;
yy36:
			++s->cur;
			fputc('~', stdout);
			continue;
yy38:
			++s->cur;
			fputc('\\', stdout);
			continue;
yy40:
			++s->cur;
			fputc('{', stdout);
			continue;
yy42:
			++s->cur;
			fputc('#', stdout);
			continue;
yy44:
			++s->cur;
			fputc('}', stdout);
			continue;
/* *********************************** */
yyc_Skiptoeol:
			s->state = 2;(2);
			if ((s->lim - s->cur) < 5) if (fill(s, 5) == ~0) break;
yyFillLabel2:
			s->yych = *s->cur;
			{
				static void *yytarget[256] = {
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy50, &&yy48, &&yy48, &&yy52, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy53,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy54, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48,
					&&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48, &&yy48
				};
				goto *yytarget[s->yych];
			}
yy48:
			++s->cur;
yy49:
			continue;
yy50:
			++s->cur;
			s->cond = EStateNormal;(EStateNormal);
			fputc('\n', stdout);
			continue;
yy52:
			s->yych = *++s->cur;
			if (s->yych == '\n') goto yy55;
			goto yy49;
yy53:
			s->yych = *(s->tok = ++s->cur);
			if (s->yych == '?') goto yy57;
			goto yy49;
yy54:
			s->yych = *(s->tok = ++s->cur);
			if (s->yych == '\n') goto yy59;
			if (s->yych == '\r') goto yy61;
			goto yy49;
yy55:
			++s->cur;
			s->cond = EStateNormal;(EStateNormal);
			fputc('\r', stdout);
			fputc('\n', stdout);
			continue;
yy57:
			s->yych = *++s->cur;
			if (s->yych == '/') goto yy62;
yy58:
			s->cur = s->tok;
			goto yy49;
yy59:
			++s->cur;
			continue;
yy61:
			s->yych = *++s->cur;
			if (s->yych == '\n') goto yy59;
			goto yy58;
yy62:
			s->yych = *++s->cur;
			if (s->yych == '\n') goto yy63;
			if (s->yych == '\r') goto yy65;
			goto yy58;
yy63:
			++s->cur;
			continue;
yy65:
			++s->cur;
			if ((s->yych = *s->cur) == '\n') goto yy63;
			goto yy58;
/* *********************************** */
yyc_String:
			s->state = 3;(3);
			if ((s->lim - s->cur) < 2) if (fill(s, 2) == ~0) break;
yyFillLabel3:
			s->yych = *s->cur;
			if (s->yych == '"') goto yy70;
			if (s->yych == '\\') goto yy72;
			++s->cur;
yy69:
			fputc(s->cur[-1], stdout);
			continue;
yy70:
			++s->cur;
			s->cond = EStateNormal;(EStateNormal);
			fputc(s->cur[-1], stdout);
			continue;
yy72:
			s->yych = *++s->cur;
			if (s->yych == '\n') goto yy69;
			++s->cur;
			fputl((const char*)s->cur-2, 2, stdout);
			continue;
		}

	}
}

int main(int argc, char **argv)
{
	Scanner in;

	if (argc != 2)
	{
		fprintf(stderr, "%s <file>\n", argv[0]);
		return 1;;
	}

	memset((char*) &in, 0, sizeof(in));

	if (!strcmp(argv[1], "-"))
	{
		in.fp = stdin;
	}
	else if ((in.fp = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "Cannot open file '%s'\n", argv[1]);
		return 1;
	}

	if (init(&in) > 0)
	{
 		scan(&in);
 	}

	if (in.fp != stdin)
	{
		fclose(in.fp);
	}
	return 0;
}
