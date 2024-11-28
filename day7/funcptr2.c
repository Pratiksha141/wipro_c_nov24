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

double polymorphicFunction(double (*functionPtr)(double, double), double num1, double num2)
{
    double result = functionPtr(num1, num2); // polymorphic call. call is binded at runtime only
    return result;
    // return functionPtr(num1, num2);
}

int main()
{
    printf("Sum  of 12.5 and 45.5 = %.2lf \n", polymorphicFunction(&findSum, 12.5, 45.5));
    printf("Product of 2.5 and 4.5 = %.2lf", polymorphicFunction(&findProduct, 2.5, 14.5));
}