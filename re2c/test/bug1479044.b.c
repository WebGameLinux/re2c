/* Generated by re2c */
#line 1 "bug1479044.b.re"
#define NULL ((char*) 0)
#define YYCTYPE char
#define YYCURSOR p
#define YYLIMIT p
#define YYMARKER q
#define YYFILL(n)

#include <stdio.h>

char *scan281(char *p)
{
	char *q;
start:

#line 18 "bug1479044.b.c"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	static const unsigned char yybm[] = {
		/* table 1 .. 8: 0 */
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180,   0, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 167,  40, 180, 
		182, 182, 182, 182, 182, 182, 182, 182, 
		182, 182, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 182, 182, 182, 182, 182, 182, 182, 
		182, 182, 182, 182, 180,  84, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		180, 180, 180, 180, 180, 180, 180, 180, 
		/* table 9 .. 10: 256 */
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128,   0, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128,   0, 128, 128, 
		192, 192, 192, 192, 192, 192, 192, 192, 
		192, 192, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
	};
	if ((YYLIMIT - YYCURSOR) < 11) YYFILL(11);
	yych = *YYCURSOR;
	if (yych <= 'f') {
		if (yych <= 'a') {
			if (yych <= '/') {
				if (yych >= 0x01) goto yy4;
			} else {
				if (yych <= '9') goto yy6;
				if (yych <= '`') goto yy4;
				goto yy7;
			}
		} else {
			if (yych <= 'c') {
				if (yych <= 'b') goto yy8;
				goto yy9;
			} else {
				if (yych <= 'd') goto yy10;
				if (yych <= 'e') goto yy11;
				goto yy12;
			}
		}
	} else {
		if (yych <= 'q') {
			if (yych <= 'l') {
				if (yych <= 'k') goto yy4;
				goto yy13;
			} else {
				if (yych == 'p') goto yy14;
				goto yy4;
			}
		} else {
			if (yych <= 'v') {
				if (yych <= 'r') goto yy15;
				if (yych <= 'u') goto yy4;
				goto yy16;
			} else {
				if (yych == 'x') goto yy17;
				goto yy4;
			}
		}
	}
	++YYCURSOR;
#line 37 "bug1479044.b.re"
	{
		return NULL;
	}
#line 136 "bug1479044.b.c"
yy4:
	++YYCURSOR;
yy5:
#line 32 "bug1479044.b.re"
	{
		goto start;
	}
#line 144 "bug1479044.b.c"
yy6:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yybm[256+yych] & 64) {
		goto yy20;
	}
	if (yych == '-') goto yy18;
	goto yy5;
yy7:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'd') goto yy22;
	goto yy5;
yy8:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'd') goto yy23;
	goto yy5;
yy9:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'd') goto yy24;
	goto yy5;
yy10:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 'n') {
		if (yych == 'h') goto yy25;
		goto yy5;
	} else {
		if (yych <= 'o') goto yy26;
		if (yych == 's') goto yy27;
		goto yy5;
	}
yy11:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'd') goto yy28;
	goto yy5;
yy12:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'd') goto yy29;
	goto yy5;
yy13:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'd') goto yy30;
	goto yy5;
yy14:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 'p') {
		if (yych <= 'n') goto yy5;
		if (yych <= 'o') goto yy31;
		goto yy32;
	} else {
		if (yych == 'r') goto yy33;
		goto yy5;
	}
yy15:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'h') goto yy34;
	goto yy5;
yy16:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'd') goto yy36;
	goto yy5;
yy17:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 's') goto yy37;
	goto yy5;
yy18:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy19;
	if (yych <= '9') goto yy38;
yy19:
	YYCURSOR = YYMARKER;
	if (yyaccept <= 1) {
		if (yyaccept == 0) {
			goto yy5;
		} else {
			goto yy158;
		}
	} else {
		if (yyaccept == 2) {
			goto yy172;
		} else {
			goto yy176;
		}
	}
yy20:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yybm[256+yych] & 64) {
		goto yy20;
	}
	if (yych == '-') goto yy18;
	goto yy19;
yy22:
	yych = *++YYCURSOR;
	if (yych == 's') goto yy40;
	goto yy19;
yy23:
	yych = *++YYCURSOR;
	if (yych == 's') goto yy41;
	goto yy19;
yy24:
	yych = *++YYCURSOR;
	if (yych == 's') goto yy42;
	goto yy19;
yy25:
	yych = *++YYCURSOR;
	if (yych == 'c') goto yy43;
	goto yy19;
yy26:
	yych = *++YYCURSOR;
	if (yych == 'r') goto yy44;
	goto yy19;
yy27:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy45;
	goto yy19;
yy28:
	yych = *++YYCURSOR;
	if (yych == 's') goto yy46;
	goto yy19;
yy29:
	yych = *++YYCURSOR;
	if (yych == 's') goto yy47;
	goto yy19;
yy30:
	yych = *++YYCURSOR;
	if (yych == 's') goto yy48;
	goto yy19;
yy31:
	yych = *++YYCURSOR;
	if (yych == 'o') goto yy49;
	goto yy19;
yy32:
	yych = *++YYCURSOR;
	if (yych == 'p') goto yy50;
	goto yy19;
yy33:
	yych = *++YYCURSOR;
	if (yych == 'e') goto yy51;
	goto yy19;
yy34:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[256+yych] & 128) {
		goto yy34;
	}
	if (yych <= '\n') goto yy19;
	goto yy52;
yy36:
	yych = *++YYCURSOR;
	if (yych == 's') goto yy54;
	goto yy19;
yy37:
	yych = *++YYCURSOR;
	if (yych == 't') goto yy55;
	goto yy19;
yy38:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yych == '-') goto yy56;
	if (yych <= '/') goto yy19;
	if (yych <= '9') goto yy38;
	goto yy19;
yy40:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy57;
	goto yy19;
yy41:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy58;
	goto yy19;
yy42:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy58;
	goto yy19;
yy43:
	yych = *++YYCURSOR;
	if (yych == 'p') goto yy34;
	goto yy19;
yy44:
	yych = *++YYCURSOR;
	if (yych == 'm') goto yy59;
	goto yy19;
yy45:
	yych = *++YYCURSOR;
	if (yych == 'g') goto yy60;
	if (yych == 'p') goto yy61;
	goto yy19;
yy46:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy58;
	goto yy19;
yy47:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy58;
	goto yy19;
yy48:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy58;
	goto yy19;
yy49:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy58;
	goto yy19;
yy50:
	yych = *++YYCURSOR;
	if (yych == 'd') goto yy62;
	goto yy19;
yy51:
	yych = *++YYCURSOR;
	if (yych == 'm') goto yy63;
	goto yy19;
yy52:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 1) {
		goto yy52;
	}
	if (yych == '\n') goto yy19;
	if (yych <= '/') goto yy34;
	if (yych <= '9') goto yy64;
	goto yy34;
yy54:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy58;
	goto yy19;
yy55:
	yych = *++YYCURSOR;
	if (yych == 't') goto yy66;
	goto yy19;
yy56:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy19;
	if (yych <= '9') goto yy67;
	goto yy19;
yy57:
	yych = *++YYCURSOR;
	if (yych == '.') goto yy19;
	if (yych == 'p') goto yy71;
	goto yy70;
yy58:
	yych = *++YYCURSOR;
	if (yych == '.') goto yy19;
	goto yy70;
yy59:
	yych = *++YYCURSOR;
	if (yych == 's') goto yy34;
	goto yy19;
yy60:
	yych = *++YYCURSOR;
	if (yych == 'w') goto yy72;
	goto yy19;
yy61:
	yych = *++YYCURSOR;
	if (yych == 'p') goto yy73;
	goto yy19;
yy62:
	yych = *++YYCURSOR;
	if (yych == 's') goto yy74;
	goto yy19;
yy63:
	yych = *++YYCURSOR;
	if (yych == 'i') goto yy75;
	goto yy19;
yy64:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= ',') {
		if (yych == '\n') goto yy19;
		goto yy34;
	} else {
		if (yych <= '-') goto yy76;
		if (yych <= '/') goto yy34;
		if (yych <= '9') goto yy64;
		goto yy34;
	}
yy66:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy77;
	goto yy19;
yy67:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yych == '-') goto yy78;
	if (yych <= '/') goto yy19;
	if (yych <= '9') goto yy67;
	goto yy19;
yy69:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
yy70:
	if (yybm[0+yych] & 2) {
		goto yy69;
	}
	if (yych <= ',') goto yy19;
	if (yych <= '.') goto yy79;
	goto yy19;
yy71:
	yych = *++YYCURSOR;
	if (yych == 'p') goto yy80;
	goto yy19;
yy72:
	yych = *++YYCURSOR;
	if (yych == '4') goto yy81;
	goto yy19;
yy73:
	yych = *++YYCURSOR;
	if (yych == 'p') goto yy58;
	goto yy19;
yy74:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy58;
	goto yy19;
yy75:
	yych = *++YYCURSOR;
	if (yych == 'u') goto yy82;
	goto yy19;
yy76:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 1) {
		goto yy52;
	}
	if (yych == '\n') goto yy19;
	if (yych <= '/') goto yy34;
	if (yych <= '9') goto yy83;
	goto yy34;
yy77:
	yych = *++YYCURSOR;
	if (yych == 'd') goto yy85;
	goto yy19;
yy78:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy19;
	if (yych <= '9') goto yy86;
	goto yy19;
yy79:
	yych = *++YYCURSOR;
	if (yych == '\n') goto yy19;
	goto yy88;
yy80:
	yych = *++YYCURSOR;
	if (yych == 'p') goto yy58;
	goto yy19;
yy81:
	yych = *++YYCURSOR;
	if (yych == 'p') goto yy90;
	goto yy19;
yy82:
	yych = *++YYCURSOR;
	if (yych == 'm') goto yy91;
	goto yy19;
yy83:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == '\n') goto yy19;
		if (yych <= ',') goto yy34;
		goto yy76;
	} else {
		if (yych <= '.') goto yy92;
		if (yych <= '/') goto yy34;
		if (yych <= '9') goto yy83;
		goto yy34;
	}
yy85:
	yych = *++YYCURSOR;
	if (yych == 's') goto yy93;
	goto yy19;
yy86:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 8) YYFILL(8);
	yych = *YYCURSOR;
	if (yych == '.') goto yy94;
	if (yych <= '/') goto yy19;
	if (yych <= '9') goto yy86;
	goto yy19;
yy88:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 4) {
		goto yy88;
	}
	if (yych <= '\n') goto yy19;
	goto yy95;
yy90:
	yych = *++YYCURSOR;
	if (yych == 'o') goto yy97;
	goto yy19;
yy91:
	yych = *++YYCURSOR;
	if (yych == 'C') goto yy58;
	goto yy19;
yy92:
	yych = *++YYCURSOR;
	if (yych == '.') goto yy98;
	goto yy99;
yy93:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy58;
	goto yy19;
yy94:
	yych = *++YYCURSOR;
	if (yych == 'b') goto yy104;
	if (yych == 'd') goto yy105;
	goto yy103;
yy95:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 8) {
		goto yy95;
	}
	if (yych == '\n') goto yy19;
	if (yych == 'u') goto yy108;
	goto yy88;
yy97:
	yych = *++YYCURSOR;
	if (yych == 'o') goto yy109;
	goto yy19;
yy98:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy99:
	if (yybm[0+yych] & 16) {
		goto yy98;
	}
	if (yych <= '\n') goto yy19;
	if (yych >= '.') goto yy110;
yy100:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == '\n') goto yy19;
		if (yych <= ',') goto yy98;
		goto yy100;
	} else {
		if (yych <= '.') goto yy110;
		if (yych <= '/') goto yy98;
		if (yych <= '9') goto yy112;
		goto yy98;
	}
yy102:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy103:
	if (yybm[0+yych] & 32) {
		goto yy102;
	}
	if (yych <= '\n') goto yy19;
	goto yy106;
yy104:
	yych = *++YYCURSOR;
	if (yych == 'o') goto yy114;
	goto yy103;
yy105:
	yych = *++YYCURSOR;
	if (yych == 'h') goto yy115;
	goto yy103;
yy106:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 64) {
		goto yy106;
	}
	if (yych == '\n') goto yy19;
	if (yych == 'o') goto yy116;
	goto yy102;
yy108:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 8) {
		goto yy95;
	}
	if (yych == '\n') goto yy19;
	if (yych == 's') goto yy117;
	goto yy88;
yy109:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy58;
	goto yy19;
yy110:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == '\n') goto yy19;
		if (yych <= ',') goto yy98;
		goto yy100;
	} else {
		if (yych <= '.') goto yy110;
		if (yych == 'r') goto yy118;
		goto yy98;
	}
yy112:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == '\n') goto yy19;
		if (yych <= ',') goto yy98;
		goto yy119;
	} else {
		if (yych <= '.') goto yy110;
		if (yych <= '/') goto yy98;
		if (yych <= '9') goto yy112;
		goto yy98;
	}
yy114:
	yych = *++YYCURSOR;
	if (yych == 't') goto yy120;
	goto yy103;
yy115:
	yych = *++YYCURSOR;
	if (yych == 'c') goto yy121;
	goto yy103;
yy116:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 64) {
		goto yy106;
	}
	if (yych == '\n') goto yy19;
	if (yych == 'd') goto yy122;
	goto yy102;
yy117:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 8) {
		goto yy95;
	}
	if (yych == '\n') goto yy19;
	if (yych == 'w') goto yy123;
	goto yy88;
yy118:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == '\n') goto yy19;
		if (yych <= ',') goto yy98;
		goto yy100;
	} else {
		if (yych <= '.') goto yy110;
		if (yych == 'e') goto yy124;
		goto yy98;
	}
yy119:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == '\n') goto yy19;
		if (yych <= ',') goto yy98;
		goto yy100;
	} else {
		if (yych <= '.') goto yy110;
		if (yych <= '/') goto yy98;
		if (yych <= '9') goto yy125;
		goto yy98;
	}
yy120:
	yych = *++YYCURSOR;
	if (yych == 'h') goto yy127;
	goto yy103;
yy121:
	yych = *++YYCURSOR;
	if (yych == 'p') goto yy128;
	goto yy103;
yy122:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 64) {
		goto yy106;
	}
	if (yych == '\n') goto yy19;
	if (yych == 'e') goto yy130;
	goto yy102;
yy123:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 8) {
		goto yy95;
	}
	if (yych == '\n') goto yy19;
	if (yych == 'e') goto yy131;
	goto yy88;
yy124:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == '\n') goto yy19;
		if (yych <= ',') goto yy98;
		goto yy100;
	} else {
		if (yych <= '.') goto yy110;
		if (yych == 's') goto yy132;
		goto yy98;
	}
yy125:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == '\n') goto yy19;
		if (yych <= ',') goto yy98;
		goto yy119;
	} else {
		if (yych <= '.') goto yy110;
		if (yych <= '/') goto yy98;
		if (yych <= '9') goto yy125;
		goto yy98;
	}
yy127:
	yych = *++YYCURSOR;
	if (yych == 'e') goto yy133;
	goto yy103;
yy128:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 128) {
		goto yy128;
	}
	if (yych <= '\n') goto yy19;
	if (yych <= '.') goto yy134;
	goto yy136;
yy130:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 32) {
		goto yy102;
	}
	if (yych <= '\n') goto yy19;
	goto yy136;
yy131:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 8) {
		goto yy95;
	}
	if (yych == '\n') goto yy19;
	if (yych == 's') goto yy138;
	goto yy88;
yy132:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == '\n') goto yy19;
		if (yych <= ',') goto yy98;
		goto yy100;
	} else {
		if (yych <= '.') goto yy110;
		if (yych == 'n') goto yy139;
		goto yy98;
	}
yy133:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy140;
	goto yy103;
yy134:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == '\n') goto yy19;
		if (yych <= '-') goto yy128;
		goto yy134;
	} else {
		if (yych <= 'm') {
			if (yych <= 'l') goto yy128;
		} else {
			if (yych == 'w') goto yy141;
			goto yy128;
		}
	}
yy136:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == '\n') goto yy19;
		if (yych <= '-') goto yy128;
		goto yy134;
	} else {
		if (yych <= 'm') {
			if (yych <= 'l') goto yy128;
			goto yy136;
		} else {
			if (yych == 'o') goto yy142;
			goto yy128;
		}
	}
yy138:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 8) {
		goto yy95;
	}
	if (yych == '\n') goto yy19;
	if (yych == 't') goto yy143;
	goto yy88;
yy139:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == '\n') goto yy19;
		if (yych <= ',') goto yy98;
		goto yy100;
	} else {
		if (yych <= '.') goto yy110;
		if (yych == 'e') goto yy144;
		goto yy98;
	}
yy140:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy128;
	goto yy103;
yy141:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == '\n') goto yy19;
		if (yych <= '-') goto yy128;
		goto yy134;
	} else {
		if (yych <= 'a') {
			if (yych <= '`') goto yy128;
			goto yy145;
		} else {
			if (yych == 'm') goto yy136;
			goto yy128;
		}
	}
yy142:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == '\n') goto yy19;
		if (yych <= '-') goto yy128;
		goto yy134;
	} else {
		if (yych <= 'd') {
			if (yych <= 'c') goto yy128;
			goto yy146;
		} else {
			if (yych == 'm') goto yy136;
			goto yy128;
		}
	}
yy143:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 4) {
		goto yy88;
	}
	if (yych <= '\n') goto yy19;
	goto yy147;
yy144:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == '\n') goto yy19;
		if (yych <= ',') goto yy98;
		goto yy100;
	} else {
		if (yych <= '.') goto yy110;
		if (yych == 't') goto yy148;
		goto yy98;
	}
yy145:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == '\n') goto yy19;
		if (yych <= '-') goto yy128;
		goto yy134;
	} else {
		if (yych <= 'm') {
			if (yych <= 'l') goto yy128;
			goto yy136;
		} else {
			if (yych == 's') goto yy149;
			goto yy128;
		}
	}
yy146:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == '\n') goto yy19;
		if (yych <= '-') goto yy128;
		goto yy134;
	} else {
		if (yych <= 'e') {
			if (yych <= 'd') goto yy128;
			goto yy150;
		} else {
			if (yych == 'm') goto yy136;
			goto yy128;
		}
	}
yy147:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 8) {
		goto yy95;
	}
	if (yych <= 'm') {
		if (yych == '\n') goto yy19;
		goto yy88;
	} else {
		if (yych <= 'n') goto yy151;
		if (yych == 'u') goto yy108;
		goto yy88;
	}
yy148:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 16) {
		goto yy98;
	}
	if (yych <= '\n') goto yy19;
	if (yych <= '-') goto yy100;
	goto yy152;
yy149:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == '\n') goto yy19;
		if (yych <= '-') goto yy128;
		goto yy134;
	} else {
		if (yych <= 'h') {
			if (yych <= 'g') goto yy128;
			goto yy153;
		} else {
			if (yych == 'm') goto yy136;
			goto yy128;
		}
	}
yy150:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 128) {
		goto yy128;
	}
	if (yych <= '\n') goto yy19;
	if (yych <= '.') goto yy134;
	goto yy136;
yy151:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 8) {
		goto yy95;
	}
	if (yych == '\n') goto yy19;
	if (yych == 'e') goto yy154;
	goto yy88;
yy152:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych <= '\n') {
			if (yych <= '\t') goto yy98;
			goto yy19;
		} else {
			if (yych <= ',') goto yy98;
			if (yych <= '-') goto yy100;
			goto yy110;
		}
	} else {
		if (yych <= 'p') {
			if (yych <= 'o') goto yy98;
			goto yy155;
		} else {
			if (yych == 'r') goto yy118;
			goto yy98;
		}
	}
yy153:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == '\n') goto yy19;
		if (yych <= '-') goto yy128;
		goto yy134;
	} else {
		if (yych <= 'i') {
			if (yych <= 'h') goto yy128;
			goto yy156;
		} else {
			if (yych == 'm') goto yy136;
			goto yy128;
		}
	}
yy154:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 8) {
		goto yy95;
	}
	if (yych == '\n') goto yy19;
	if (yych == 't') goto yy157;
	goto yy88;
yy155:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == '\n') goto yy19;
		if (yych <= ',') goto yy98;
		goto yy100;
	} else {
		if (yych <= '.') goto yy110;
		if (yych == 'i') goto yy159;
		goto yy98;
	}
yy156:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == '\n') goto yy19;
		if (yych <= '-') goto yy128;
		goto yy134;
	} else {
		if (yych <= 'l') goto yy128;
		if (yych <= 'm') goto yy136;
		if (yych <= 'n') goto yy160;
		goto yy128;
	}
yy157:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 4) {
		goto yy88;
	}
	if (yych >= '\v') goto yy95;
yy158:
#line 17 "bug1479044.b.re"
	{
		return "dsl";
	}
#line 1140 "bug1479044.b.c"
yy159:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == '\n') goto yy19;
		if (yych <= ',') goto yy98;
		goto yy100;
	} else {
		if (yych <= '.') goto yy110;
		if (yych == 't') goto yy161;
		goto yy98;
	}
yy160:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == '\n') goto yy19;
		if (yych <= '-') goto yy128;
		goto yy134;
	} else {
		if (yych <= 'g') {
			if (yych <= 'f') goto yy128;
			goto yy162;
		} else {
			if (yych == 'm') goto yy136;
			goto yy128;
		}
	}
yy161:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == '\n') goto yy19;
		if (yych <= ',') goto yy98;
		goto yy100;
	} else {
		if (yych <= '.') goto yy110;
		if (yych == 't') goto yy163;
		goto yy98;
	}
yy162:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == '\n') goto yy19;
		if (yych <= '-') goto yy128;
		goto yy134;
	} else {
		if (yych <= 'm') {
			if (yych <= 'l') goto yy128;
			goto yy136;
		} else {
			if (yych == 't') goto yy164;
			goto yy128;
		}
	}
yy163:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 16) {
		goto yy98;
	}
	if (yych <= '\n') goto yy19;
	if (yych <= '-') goto yy100;
	goto yy165;
yy164:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == '\n') goto yy19;
		if (yych <= '-') goto yy128;
		goto yy134;
	} else {
		if (yych <= 'm') {
			if (yych <= 'l') goto yy128;
			goto yy136;
		} else {
			if (yych == 'o') goto yy166;
			goto yy128;
		}
	}
yy165:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych <= '\n') {
			if (yych <= '\t') goto yy98;
			goto yy19;
		} else {
			if (yych <= ',') goto yy98;
			if (yych <= '-') goto yy100;
			goto yy110;
		}
	} else {
		if (yych <= 'e') {
			if (yych <= 'd') goto yy98;
			goto yy167;
		} else {
			if (yych == 'r') goto yy118;
			goto yy98;
		}
	}
yy166:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == '\n') goto yy19;
		if (yych <= '-') goto yy128;
		goto yy134;
	} else {
		if (yych <= 'l') goto yy128;
		if (yych <= 'm') goto yy136;
		if (yych <= 'n') goto yy168;
		goto yy128;
	}
yy167:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == '\n') goto yy19;
		if (yych <= ',') goto yy98;
		goto yy100;
	} else {
		if (yych <= '.') goto yy110;
		if (yych == 'd') goto yy169;
		goto yy98;
	}
yy168:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 128) {
		goto yy128;
	}
	if (yych <= '\n') goto yy19;
	if (yych <= '.') goto yy170;
	goto yy136;
yy169:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == '\n') goto yy19;
		if (yych <= ',') goto yy98;
		goto yy100;
	} else {
		if (yych <= '.') goto yy110;
		if (yych == 'u') goto yy171;
		goto yy98;
	}
yy170:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 'd') {
		if (yych <= '\n') {
			if (yych <= '\t') goto yy128;
			goto yy19;
		} else {
			if (yych == '.') goto yy134;
			goto yy128;
		}
	} else {
		if (yych <= 'm') {
			if (yych <= 'e') goto yy173;
			if (yych <= 'l') goto yy128;
			goto yy136;
		} else {
			if (yych == 'w') goto yy141;
			goto yy128;
		}
	}
yy171:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 16) {
		goto yy98;
	}
	if (yych <= '\n') goto yy172;
	if (yych <= '-') goto yy100;
	goto yy110;
yy172:
#line 22 "bug1479044.b.re"
	{
		return "resnet";
	}
#line 1338 "bug1479044.b.c"
yy173:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == '\n') goto yy19;
		if (yych <= '-') goto yy128;
		goto yy134;
	} else {
		if (yych <= 'd') {
			if (yych <= 'c') goto yy128;
		} else {
			if (yych == 'm') goto yy136;
			goto yy128;
		}
	}
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == '\n') goto yy19;
		if (yych <= '-') goto yy128;
		goto yy134;
	} else {
		if (yych <= 'm') {
			if (yych <= 'l') goto yy128;
			goto yy136;
		} else {
			if (yych != 'u') goto yy128;
		}
	}
	yyaccept = 3;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 128) {
		goto yy128;
	}
	if (yych <= '\n') goto yy176;
	if (yych <= '.') goto yy134;
	goto yy136;
yy176:
#line 27 "bug1479044.b.re"
	{
		return "edu";
	}
#line 1385 "bug1479044.b.c"
}
#line 40 "bug1479044.b.re"

}

int main(int argc, char **argv)
{
	int n = 0;
	char *largv[2];

	if (argc < 2)
	{
		argc = 2;
		argv = largv;
		argv[1] = "D-128-208-46-51.dhcp4.washington.edu";
	}
	while(++n < argc)
	{
		char *res = scan281(argv[n]);
		printf("%s\n", res ? res : "<NULL>");
	}
	return 0;
}
