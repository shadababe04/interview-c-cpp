#include<stdio.h>
void function(int x)
{
    printf("x: %d\n", x);
}

double add(double x, double y)
{
    return x+y; 
}
int main()
{
    // void (*func_pointer)(int); //initialise fp
    // func_pointer = &function; //assign
    // (*func_pointer)(4);   // Derefrence
    double (*add_pointer)(double, double) = add; //initailise and assign
    double a=20;
    double b=30;
    //double result = (*add_pointer)(a,b);
    double result = add_pointer(a,b);
    printf("result =%.2f",result);

    return 0;
}