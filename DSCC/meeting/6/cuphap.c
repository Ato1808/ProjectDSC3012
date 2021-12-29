#include <stdio.h>
int main ()
{
    int arr[2][3] = {
        {6, 2, 5},
        {4, 20, 8}
    };

    printf ("\nOutput: %d ",arr[0][2]);

    // Assign new value
    arr[0][2] = 10;
    printf ("\nOutput: %d ",arr[0][2]);

    return 0;
}