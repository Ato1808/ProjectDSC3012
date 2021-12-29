#include <stdio.h>
int perimeter (int *length, int *width)
{
    int per = ( (*length) + (*width) ) * 2;
    return per;
}
int area (int *length, int *width)
{
    int area = (*length) * (*width);
    return area;
}
int main ()
{
    int length, width;
    scanf ("%d %d", &length, &width);
    if (length != 0 && width != 0 && width <= 5000 && length <= 5000)
    {
        printf ("%d", perimeter (&length, &width));
        printf ("\n");
        printf ("%d", area (&length, &width));
    }
    return 0;
}
/* Tính chu vi, diện tích hình chữ nhật */