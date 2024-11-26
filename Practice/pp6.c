#include<stdio.h>
#include<math.h>
int main()
{
    int num=1 ;
    do
    {
        printf("%d\n",num);
        num++;
        if(num==6)
        break;
    }
    while(num<=10);
}