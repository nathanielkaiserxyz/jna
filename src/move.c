#include <ncurses.h>
#include "../include/move.h"

void moveChar(int* x, int* y, int dx, int dy)
{	
	destroyChar(*x, *y);

	*x = *x+dx;
	*y = *y+dy;
	move(*x, *y);	
	addch('#');
	refresh();
}
void destroyChar(int x, int y)
{
	move(x, y);
	addch(' ');
	refresh();
}
