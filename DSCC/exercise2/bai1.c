#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c, v, x, y;
    printf ("\nPHUONG TRINH BAC HAI");
    printf ("\nNhap he so a: ");
    scanf ("%f",&a);
    printf ("\nNhap he so b: ");
    scanf ("%f",&b);
    printf ("\nNhap he so c: ");
    scanf ("%f",&c);
    if (a != 0)
        {
            x = a + b + c;
            if ( x == 0)
                {
                    printf ("\nVi a + b + c = 0, suy ra:");
                    printf ("\nNghiem 1 = 1");
                    printf ("\nNghiem 2 = %.2f", c/a);
                }
            else 
                {
                    y = a - b + c;
                    if ( y == 0 )
                        {
                            printf ("\nVi a - b + c = 0, suy ra:");
                            printf ("\n\nNghiem 1 = -1");
                            printf ("\nNghiem 2 = %.2f", -c/a);
                        }
                    else 
                        {
                            v = b*b - 4*a*c;
                            if ( v < 0 )
                                {
                                    printf ("\nBiet so = %.1f", v);
                                    printf ("\n\nVi biet so < 0, suy ra:");
                                    printf ("\n\nPhuong trinh vo nghiem");
                                }
                            else 
                                {
                                    if ( v == 0)
                                        {
                                            printf ("\nBiet so = %.1f", v);
                                            printf ("\n\nVi biet so = 0, suy ra:");
                                            printf ("\n\nPhuong trinh co nghiem kep:");
                                            printf ("\n\nNghiem 1 = Nghiem 2 = %.4f", -b/(2*a));
                                        }
                                    else
                                        {
                                            if ( v > 0 )
                                                {
                                                    printf ("\nBiet so = %.1f", v);
                                                    printf ("\n\nVi biet so > 0, suy ra:");
                                                    printf ("\n\nPhuong trinh co 2 nghiem phan biet:");
                                                    printf ("\n\nNghiem 1 = %.4f", (-b+sqrt(v))/(2*a));
                                                    printf ("\nNghiem 2 = %.4f", (-b-sqrt(v))/(2*a));
                                                }
                                        }
                                }
                        }
                }
        }
    else
        {
            printf ("\nHe so a phai khac 0. Hay nhap lai nhe!");
        }
    return 0;
}
