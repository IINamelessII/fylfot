#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

COORD coord = {0, 0};
int i, j, m, n;
int s = 6;
int c = 13;

void gotoxy (int x, int y)
{
    coord.X = x; coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void p(){
    gotoxy(c + i, c + i);
    printf("*");
    gotoxy(c - i, c + i);
    printf("*");
    gotoxy(c + i, c - i);
    printf("*");
    gotoxy(c - i, c - i);
    printf("*");
    sleep(150);
}

void pv(){
    gotoxy(c - s - i, c + s - i);
    printf("*");
    gotoxy(c + s - i, c + s + i);
    printf("*");
    gotoxy(c + s + i, c - s + i);
    printf("*");
    gotoxy(c - s + i, c - s - i);
    printf("*");
    sleep(150);
}

int main()
{
    for (i = 0; i <= s; i++)
        p();
    for (i = 1; i < s; i++)
        pv();
    sleep(INFINITE);
    return 0;
}
