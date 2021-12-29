#include <stdio.h>
int main ()
{
    printf ("\n------------------------");
    printf ("\n| GAME AI LA TRIEU PHU |");
    printf ("\n------------------------");
    printf ("\n\nDau khong phai ten cua mot nhom nhac nu ?");
    printf ("\nA. BTS");      printf ("\t\tB. Blackpink");
    printf ("\nC. TWICE");    printf ("\tD. 2NE1");

    char key;
    printf ("\n\nNhap dap an cua ban: %c", key);
    scanf ("%c", &key);
    if ( key == 'A' || key == 'a')
        {
            printf ("\nCorrect!");
        }
    else 
        {
            printf ("\nIncorrect!");
        }
    return 0;
}