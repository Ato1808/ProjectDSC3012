#include<stdio.h>
int main()
{
    float a, b;
    printf ("\nNhap 2 so a, b bat ki:");
    scanf ("%f %f", &a, &b);
    printf ("\nKet qua:");
    printf ("\na*b: %.1f", a*b);
    printf ("\na*2: %.1f", a*2);
    printf ("\nb*10: %.1f", b*10);
    printf ("\na/b: %.1f", a/b);
    return 0;
}
