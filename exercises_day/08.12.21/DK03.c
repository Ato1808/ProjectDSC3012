#include <stdio.h>
#include <math.h>
int value_difference (int *a, int *b)
{
    int val_dif;
    if (*a > *b)
    {
        val_dif = (*a) - (*b);
    }
    else if (*b > *a)
    {
        val_dif = (*b) - (*a);
    }
    else 
    {
       val_dif = 0; 
    }
    return val_dif;
}
int main ()
{
    int a, b;
    scanf ("%d %d", &a, &b);
    if (a >= 0 && b >= 0)
    {
        if (a <= pow (10, 6)&& b <= pow (10, 6))
        {
            printf ("%d", value_difference (&a, &b));
        }
    }
    return 0;
}
/* Finding value difference of two numbers */