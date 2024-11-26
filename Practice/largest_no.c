#include<stdio.h>
#include<math.h>
int main()
{
    int num1=0 , num2=0 , num3=0 ;

    printf("Enter three nos:");
    scanf("%d %d %d",&num1,&num2,&num3);
        if(num1>=num2 && num1>=num3)
        {
         printf("%d no is largest ",num1);
        }

         if(num2>=num1 && num2>=num3)
        {
        printf("%d no is largest ",num2);
        }

        if(num3>=num1 && num3>=num2)
        {
        printf("%d no is largest ",num3);
        }
    }