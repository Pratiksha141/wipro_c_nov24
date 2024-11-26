#include<stdio.h>
#include<math.h>
int main()
{
    int num1=0 , num2=0 ;
    printf("%d Enter a two No:");
    scanf("%d %d",&num1,&num2);

    if(num1>num2)
    {
        printf("%d no is largest ",num1);
    }
    else
    {
        printf("%d no is largest",num2);
    }
}