#include <stdio.h>
int main ()
{
    int a;
    int count1=0, count2=0;
    printf ("Nhap 1 so nguyen bat ki: ");
    scanf ("%d", &a);
    if ( a > 0)
        {
            while ( a > 0 )
                {
                    a/=10;
                    count1++;
                }
                    printf ("Co %d chu so", count1);
        }
    else    
        {
            while ( a < 0 )
                {
                    a/=10;
                    count2++;
                }
                    printf ("Co %d chu so", count2);
        }
    return 0;

}