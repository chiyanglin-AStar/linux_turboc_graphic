#include <termios.h>
#include <unistd.h>
#include <stdio.h>


/* reads from keypress, doesn't echo */
int getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

/* reads from keypress, echoes */
int getche(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

void gotoxy(int x, int y) {
  printf("%c[%d;%df",0x1B, y, x);
}

void clrscr(void) {
  fprintf(stdout, "\033[2J\033[0;0f");
  fflush(stdout);
}

void textcolor(int attr, int fg, int bg) {   
  printf("%c[%d;%d;%dm", 0x1B, attr, fg + 30, bg + 40);
}

void textbackground(int bg) {   
  printf("%c[;;%dm", 0x1B, bg + 40);
}
