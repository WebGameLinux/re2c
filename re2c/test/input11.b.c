/* Generated by re2c */
#line 1 "input11.b.re"

#line 5 "input11.b.c"
{
	YYCTYPE yych;
	static const unsigned char yybm[] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 
		0xE0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x80, 
		0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	};
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *YYCURSOR;
	if (yych <= '@') {
		if (yych <= '/') {
			if (yych == '-') goto yy4;
		} else {
			if (yych <= '0') goto yy5;
			if (yych <= '9') goto yy7;
		}
	} else {
		if (yych <= 'q') {
			if (yych <= 'Z') goto yy8;
			if (yych >= 'a') goto yy8;
		} else {
			if (yych <= 'r') goto yy10;
			if (yych <= 'z') goto yy8;
		}
	}
	++YYCURSOR;
yy3:
#line 15 "input11.b.re"
	{ return -1; }
#line 64 "input11.b.c"
yy4:
	yych = *++YYCURSOR;
	if (yych <= '0') goto yy3;
	if (yych <= '9') goto yy11;
	goto yy3;
yy5:
	++YYCURSOR;
yy6:
#line 13 "input11.b.re"
	{ return 2; }
#line 75 "input11.b.c"
yy7:
	yych = *++YYCURSOR;
	goto yy12;
yy8:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy14;
yy9:
#line 12 "input11.b.re"
	{ return 1; }
#line 86 "input11.b.c"
yy10:
	yych = *++YYCURSOR;
	if (yych == 'e') goto yy15;
	goto yy14;
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy12:
	if (yybm[0+yych] & 0x20) {
		goto yy11;
	}
	goto yy6;
yy13:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy14:
	if (yybm[0+yych] & 0x40) {
		goto yy13;
	}
	goto yy9;
yy15:
	yych = *++YYCURSOR;
	if (yych != '2') goto yy14;
	yych = *++YYCURSOR;
	if (yych != 'c') goto yy14;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych != ':') goto yy14;
	yych = *++YYCURSOR;
	if (yych <= '^') {
		if (yych <= '@') goto yy19;
		if (yych <= 'Z') goto yy20;
	} else {
		if (yych == '`') goto yy19;
		if (yych <= 'z') goto yy20;
	}
yy19:
	YYCURSOR = YYMARKER;
	goto yy9;
yy20:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 0x80) {
		goto yy20;
	}
#line 11 "input11.b.re"
	{ return 0; }
#line 136 "input11.b.c"
}
#line 17 "input11.b.re"

