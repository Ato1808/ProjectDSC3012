#include <stdio.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int left = low;
    int right = high - 1;
    int loop = 0;
    while(loop == 0)
    {
        while(arr[left] < pivot && left <= right) 
        {
            left++;  
        }
        while(arr[right] > pivot && right >= left) 
        {
            right--;   
        }
        if (left >= right)
        {
            loop = 1;
        }
        else 
        {
            swap(&arr[left], &arr[right]);     
        }
        left++;
        right--;
    }
    swap(&arr[left], &pivot);
    return left;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    partition(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}