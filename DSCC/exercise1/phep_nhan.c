#include<stdio.h>
int main()
{
   int a, b;
   float c, d;
   printf ("Nhap 2 so a, b bat ki:");
   scanf ("%d %d", &a, &b);
   if (a%2==0 || a%3==0 || a%4==0 || a%5==0 || a%6==0 || a%7==0 || a%8==0 || a%9==0
      && b%2==0 || b%3==0 || b%4==0 || b%5==0 || b%6==0 || b%7==0 || b%8==0 || b%9==0)
      {
         printf ("\nKet qua:");
         printf ("\na*b: %d", a*b);
         printf ("\na*2: %d", a*2);
         printf ("\nb*10: %d", b*10);
         if (a%b==0)
            {
               printf ("\na/b: %d", a/b);
            }
         else
            {
               c=a; d=b;
               printf ("\na/b: %.1f", c/d);
            }   
      }
   else
      {
         c=a; d=b;
         printf ("\nKet qua:");
         printf ("\na*b: %f", c*d);
         printf ("\na*2: %f", c*2);
         printf ("\nb*10: %f", d*10);
         printf ("\na/b: %.1f", c/d);
      }
   return 0;   
}