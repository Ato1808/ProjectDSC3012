#include <stdio.h>
#include <math.h>
#define pi 3.14;
float perimeter (float *radius)
{
    float per = 2 * (*radius) * pi;
    return per;
}
float area (float *radius)
{
    float area = pow(*radius, 2) * pi;
    return area;
}
int main ()
{
    float radius;
    scanf ("%f", &radius);
    if (radius != 0 && radius < 1000)
    {
        printf ("%.3f %.3f", perimeter (&radius), area (&radius));
    }
    return 0;
}
/* Tính chu vi, diện tích hình tròn */