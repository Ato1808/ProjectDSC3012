#include <stdio.h>
int max_num (int *a, int *b, int *c)
{
    int max_output;
    if (*a > *b && *a > *c)
    {
        max_output = *a;
    }
    else if (*b > *a && *b > *c)
    {
        max_output = *b;
    }
    else if (*c > *a && *c > *b)
    {
        max_output = *c;
    }
    else (*a = *b = *c)
    {
        max_output = *a;
    }
    return max_output;
}
int main ()
{
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);
    if (a <= 10000 && b <= 10000 && c <= 10000 && a >= 0 && b >= 0 && c >= 0)
    {
        printf ("%d", max_num (&a, &b, &c));
    }
    return 0;
}
/* Finding the largest number of three */