#include <stdio.h>
int main ()
{
    int num, num_loop;
    long long int num_gt=1;
    printf ("Nhap 1 so tu nhien: ");
    scanf ("%d", &num);
    for (num_loop=1; num_loop<=num; num_loop++)
        {
            num_gt = num_gt * num_loop;
        }
    printf ("\nGiai thua cua %d bang %lld", num, num_gt);
    return 0;
}