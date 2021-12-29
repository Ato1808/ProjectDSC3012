#include <stdio.h>

int x, y, z; //variables in global

int main ()
{
    float a, b, c; //variables in local
    
    printf ("\nCac bien o global");

    printf ("\nx: %d", x);
    printf ("\ny: %d", y);
    printf ("\nz: %d", z);


    printf ("\nCac bien o local");

    printf ("\na: %f", a);
    printf ("\nb: %f", b);
    printf ("\nc: %f", c);
    return 0;
}