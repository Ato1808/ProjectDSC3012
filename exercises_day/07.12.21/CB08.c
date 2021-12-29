#include <stdio.h>
#include <math.h>
int addition (int *a, int *b)
{
    int add = (*a) + (*b);
    return add;
}
int main ()
{
    int a, b;
    scanf ("%d %d", &a, &b);
    if (a <= pow(10, 9) && b <= pow(10, 9) && a >= 0 && b >= 0)
    {
        printf ("%d + %d = %d", a, b, addition (&a, &b));
    }
    return 0;
}
/* Lại là phép cộng */