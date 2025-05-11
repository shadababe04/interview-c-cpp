//Given an array of n integers, find the largest and smallest elements using pointer arithmetic.
#include<stdio.h>
int main()
{
    int n, i;
    int *p;
    int largest, smallest;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    p = arr;
    largest = smallest = *p;
    for (i = 1; i < n; i++)
    {
        if (*(p + i) > largest)
            largest = *(p + i);
        if (*(p + i) < smallest)
            smallest = *(p + i);
    }
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
    return 0;
}