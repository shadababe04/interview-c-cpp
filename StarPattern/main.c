#include<stdio.h>

int a=5;
int k=5;
int main()
{
    for(int i=0;i<a;i++)
    {
        for(int j=0; j<k;j++)
        {
            printf("*");
        }
        printf("\n");
        k--;
    }
    return 0;
}