#include <stdio.h>
int main ()
{
    int a = 5;
    int *b = &a + 1;
    int *c = &*b;
    printf ("%d\n", b);
    printf ("%d\n", c);
    return 0;
}