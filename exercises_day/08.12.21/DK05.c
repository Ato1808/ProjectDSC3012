#include <stdio.h>
#include <math.h>
void square_number (long int *a)
{
    long int x1 = sqrt (*a);
    if ((*a) == pow (x1, 2))
    {
        printf ("YES");
    }
    else
    {
        printf ("NO");
    }
}
int main ()
{
    long int a;
    scanf ("%ld", &a);
	if (a <= pow (10, 12))
    {
        square_number (&a);
    }
    else if (a == 0)
    {
        printf ("YES");
    }
    return 0;
}
/* Checking square number */