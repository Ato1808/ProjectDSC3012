#include <stdio.h>
#include <math.h>
int round_num (double *n)
{
    int output = round (*n);
    return output;
} 
int main ()
{
    double n;
    scanf ("%lf", &n);
    if (n <= pow (10, 6))
    {
        printf ("%d", round_num (&n));
    }
    return 0;
}
/* Rounding number */