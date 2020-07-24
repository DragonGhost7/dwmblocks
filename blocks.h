//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.bin/statusbar/memory",						5,		1},
	{"", "~/.bin/statusbar/cpu",							5,		1},
	{"", "~/.bin/statusbar/dwm_mail.sh",					10,		12},
	{"", "~/.bin/statusbar/dwm_battery.sh",				10,		1},
	{"", "~/.bin/statusbar/internet",					    3,		1},
	{"", "~/.bin/statusbar/dwm_date.sh",					1,		1},
	{";", "~/.bin/statusbar/dwm_keyboard.sh",				0,		1},
	{"", "~/.bin/statusbar/rss",							5,		10},
	{"", "~/.bin/statusbar/music",						0,		11},
	{"", "~/.bin/statusbar/volume",						0,		9},
	{"", "~/.bin/statusbar/weather",						3600,	8},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
