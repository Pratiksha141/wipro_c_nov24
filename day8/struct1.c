#include <stdio.h>

struct Account
{
    unsigned int acc_num;
    char acc_holder_name[32];
    float balance;
    char type[16];
    unsigned long long int phone_num;
};

int main()
{
    struct Account acc1 = {234451, "Praveen", 45000, "employee", 9900990099L};
    struct Account acc2;
    printf("Size of Acc1 object = %d \n", sizeof(acc1));
    puts("Account1 details are:");
    printf("%-15s : %-10u \n", "Account-Num", acc1.acc_num);
    printf("%-15s : %-10s \n", "Acc Holder Name", acc1.acc_holder_name);
    printf("%-15s : %-10.2f \n", "Acc Balance", acc1.balance);
    printf("%-15s : %-10s \n", "Account Type", acc1.type);
    printf("%-15s : %10llu", "Phone Number", acc1.phone_num);

    
}