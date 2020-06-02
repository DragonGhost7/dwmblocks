//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.bin/memory",						5,		0},
	{"", "~/.bin/cpu",							5,		0},
	{"", "~/.bin/mailbox",						5,		0},
	{"", "~/.bin/dwm_battery.sh",				10,		0},
	{"", "~/.bin/dwm_iw.sh",					3,		0},
	{"", "~/.bin/dwm_date.sh",					1,		0},
	{";", "~/.bin/dwm_keyboard.sh",				0,		0},
	{"", "~/.bin/music",						5,		0},
	{"", "~/.bin/volume",						0,		9},
	{"", "~/.bin/weather",						3600,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
