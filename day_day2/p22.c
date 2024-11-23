
//Find sum of Odd placed Even digits in a number//

#include<stdio.h>
int main()
{
 int sum=0,odd_num=1,num,digit;
 puts("Enter a no.");
 scanf("%d",num);
 while(num!=0)
 {
    digit=num%10;
    num/=10;
    if(digit == 0 && odd_num==0)
    {
        sum+=digit;
    odd_num++;
    }
    printf("sum of numbers=%d\n",sum);
 }
}
