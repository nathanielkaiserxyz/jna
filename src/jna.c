#include <ncurses.h>
#include "../include/move.h"
#include "../include/curve.h"

#define up 1
#define down -1

int main() 
{
	int ch;
	int px = 0;
	int py = 0;
	int* x = &px;
	int* y = &py;
		
	//curses implementation
	initscr();
	cbreak();
	noecho();	
	nodelay(stdscr, TRUE);
	curs_set(0);
		
	//starting cursor position
	*x = COLS-(COLS/2);
	*y = LINES-(LINES/3);

	move(*y, *x);
	addch('#');
	wrefresh(stdscr);

	//game loop	
	for(;;)
	{
         if ((ch = getch()) == ERR) {
             /* user hasn't responded
              ...
             */
         }
         else {
			switch (ch) 
			{
				case 'p':
					endwin();
					return 0;
					break;
				case 'w':
					moveChar(x, y, 0, down);				
					break;
				case 'a':	
					moveChar(x, y, down, 0);
					break;
				case 's':
					moveChar(x, y, 0, up);						
					break;
				case 'd':
					moveChar(x, y, up, 0);	
					break;
			
				}
         }
    }	
}
