#include <stdio.h>
int main()
{
    float num = 2.22;
    float *ptr = &num;
    printf("Value of num = %.2f \n", num);
    printf("Address of num = %p  %u \n", &num, &num);
    printf("Value of num = %.2f \n", *(&num));
    printf("Address of num %p  %u \n", ptr, ptr);
    printf("Value of ptr = %p  %u \n", ptr, ptr);
    printf("Value of ptr = %p  %u \n", &num, &num);
    printf("Address of ptr =  %p  %u \n", &ptr, &ptr);
    printf("Value of num = %f \n", *ptr);
    printf("Address of num = %p \n", *(&ptr));
}