#include<stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Original array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    for(int i = 0; i < 5 / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[5 - i - 1];
        arr[5 - i - 1] = temp;
    }
    printf("\nReversed array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}