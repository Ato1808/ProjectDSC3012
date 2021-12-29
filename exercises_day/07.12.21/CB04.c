#include <stdio.h>
int addition (int *a, int *b)
{
    int add = (*a) + (*b);
    return add;
}
int subtraction (int *a, int *b)
{
    int sub = (*a) - (*b);
    return sub;
}
int multiplication (int *a, int *b)
{
    int multi = (*a) * (*b);
    return multi;
}
float division (int *a, int *b)
{
    float divi = ((*a) * 1.0) / (*b);
    return divi;
}
int main ()
{
    int a, b;
    scanf ("%d %d", &a, &b);
    printf ("%d", addition (&a, &b));
    printf ("\n%d", subtraction (&a, &b));
    printf ("\n%d", multiplication (&a, &b));
    printf ("\n%.2f", division (&a, &b));
    return 0;
}
/* Tính tổng, hiệu, tích, thương của 2 số nguyên */
