#include <stdio.h>
int add (int *a, int *b)
{
    int sum = *a + *b;
    return sum;
}
int main ()
{
    int a, b, c;
    scanf ("%d %d", &a, &b);
    printf ("%d", add (&a, &b));
    return 0;
}
/* Tính tổng 2 số nguyên */