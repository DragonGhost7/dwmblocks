//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.bin/memory",						5,		1},
	{"", "~/.bin/cpu",							5,		1},
	{"", "~/.bin/dwm_mail.sh",					6,		1},
	{"", "~/.bin/dwm_battery.sh",				10,		1},
	{"", "~/.bin/dwm_iw.sh",					3,		1},
	{"", "~/.bin/dwm_date.sh",					1,		1},
	{";", "~/.bin/dwm_keyboard.sh",				0,		1},
	{"", "~/.bin/music",						0,		11},
	{"", "~/.bin/volume",						0,		9},
	{"", "~/.bin/weather",						3600,	12},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
