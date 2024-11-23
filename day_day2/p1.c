#include <stdio.h>

int main()
{
    char ch;
    int num;
    float fnum;
    double dnum;
    short int snum;
    long int lnum;
    long long int llnum;
    printf("Size of char (ch) = %d \n", sizeof(char));                      // sizeof(ch)
    printf("Size of int (num) = %d \n", sizeof(num));                       // sizeof(ch)
    printf("Size of float (fnum) = %d \n", sizeof(float));                  // sizeof(ch)
    printf("Size of double (dnum) = %d \n", sizeof(double));                // sizeof(ch)
    printf("Size of short int (snum) = %d \n", sizeof(snum));               // sizeof(ch)
    printf("Size of long int (lnum) = %d \n", sizeof(lnum));                // sizeof(ch)
    printf("Size of long long int (llnum) = %d \n", sizeof(long long int)); // sizeof(ch)
}