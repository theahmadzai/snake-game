#include <stdio.h>

#ifdef WIN32
#include <conio.h>
#else
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#endif

#define getScreenXY(x, y) getmaxyx(stdscr, y, x)
#define addChar(x, y, c) mvaddch(y, x, c)