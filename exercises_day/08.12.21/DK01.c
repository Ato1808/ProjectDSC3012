#include <stdio.h>
int max_num (int *a, int *b)
{
    int max_output;
    if (*a >= *b)
    {
        max_output = *a;
    }
    else 
    {
        max_output = *b;
    }
    return max_output;
}
int main ()
{
    int a, b;
    scanf ("%d %d", &a, &b);
    if (a <= 10000 && b <= 10000)
    {
        printf ("%d", max_num (&a, &b));
    }
    return 0;
}
/* Finding the largest number of two */