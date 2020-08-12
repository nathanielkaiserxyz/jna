#include <ncurses.h>
#include "../include/move.h"

void moveChar(int* x, int* y, int dx, int dy)
{	
	mvprintw(0, 0, "%d %d %d %d ", *x+dx, *y+dy, COLS, LINES);
	refresh();
	if((dy == 0) && (dx+*x > 0) && (dx+*x <= COLS-1))
	{
		destroyChar(*x,*y);	
		*x = *x+dx;
		move(*y, *x);	
		addch('#');
		refresh();
	}
	else if((dx == 0) && (dy+*y > 0) && (dy+*y <= LINES-1))
	{
		destroyChar(*x, *y);
		*y = *y+dy;
		move(*y, *x);	
		addch('#');
		refresh();
	}
}
void destroyChar(int x, int y)
{
	move(y, x);
	addch(' ');
	refresh();
}
