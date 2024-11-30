#include <stdio.h>

typedef struct Account
{
    unsigned int acc_num;
    char acc_holder_name[33];
    float balance;
    char type[16];
    unsigned long long int phone_num;
} Account;

int main()
{
    Account acc1;
    Account accounts[10];
    printf("Size of Acc1 object = %d \n", sizeof(acc1));
    // To access name of 6th account:
    printf("%s", accounts[5].acc_holder_name);
    // To access balance of 10th account:
    printf("%f", accounts[9].balance);
}