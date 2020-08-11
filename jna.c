#include <ncurses.h>

int main() 
{
	initscr();
	cbreak();
//	noecho();

	while(1)
	{
		int ch = getch();
		if(ch == 1)
			break;
	}
	
	endwin();
	return 0;
}
