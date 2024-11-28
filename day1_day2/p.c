#include<stdio.h>
#include<math.h>
void main()
{
    int num, sqrt_num;
    printf("Enter a no:");
    scanf("%d",&num);
    sqrt_num = sqrt(num);

    if (sqrt_num*sqrt_num==num)
    {
        printf("%d number is perferct square",num);
    
    }
else
{
    printf("%d number is not perferct square",num);
    }
}