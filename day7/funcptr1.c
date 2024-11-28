#include <stdio.h>

// Observe the prototypes of both the functions are same
double findSum(double, double);
double findProduct(double, double);

double findSum(double num1, double num2)
{
    return num1 + num2;
}

double findProduct(double num1, double num2)
{
    return num1 * num2;
}

double findSquare(double num)
{
    return num * num;
}

int main()
{
    double (*fptr)(double, double);
    fptr = &findSum;              // fprt = findSum
    double sum = fptr(25, 35.05); // function call the pointer
    printf("Sum = %lf \n", sum);
    fptr = findProduct; // assignment of address of function to function pointer
    printf("Product = %.2lf", fptr(2.5, 4.5));
}