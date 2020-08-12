#include <ncurses.h>
#include "../include/move.h"

//void moveChar(...)
//void destroyChar();

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
	*x = LINES-(LINES/3);
	*y = COLS-(COLS/2);

	move(*x, *y);
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
					moveChar(x, y, down, 0);				
					break;
				case 'a':	
					moveChar(x, y, 0, down);
					break;
				case 's':
					moveChar(x, y, up, 0);						
					break;
				case 'd':
					moveChar(x, y, 0, up);	
					break;
			
				}
         }
    }	
}
