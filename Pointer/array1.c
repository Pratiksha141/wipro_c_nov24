#include<stdio.h>
int main()
{

float farray[]= {2.2f, 4.4f, 1.5f, 9.1f, 6.75f} ;
printf("%u %u %u %u\n", farray , farray+1 , farray-1 , farray+2);

printf("%f %f %f %f\n" ,*farray , *farray+1, *farray-1 , *farray+2);

printf("%u %u %u %u\n", &farray, &farray+1, &farray-1, &farray+2);




}