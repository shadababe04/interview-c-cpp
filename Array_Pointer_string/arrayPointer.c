//TODO
//Reverse an array using pointers.
#include <stdio.h>
void reverse_array(int size, int *arr)
{
    int *start = arr;
    int *end = arr + size - 1;
    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() 
{
    int arr[5]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Original array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    reverse_array(n, arr);
    printf("\nReversed array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}