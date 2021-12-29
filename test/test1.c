#include <stdio.h>
#include <windows.h>
#include <conio.h>
void gotoxy(int x, int y)
{
    static HANDLE h = NULL;  
    if(!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };  
    SetConsoleCursorPosition(h,c);
}
int main(){
    char *s = "nguyenvanquan7826";
    gotoxy(40 - strlen(s)/2, 1);
    printf("%snn", s);
}