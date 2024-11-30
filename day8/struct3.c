#include <string.h>
#include <stdio.h>

typedef struct Account
{
    unsigned int acc_num;
    char acc_holder_name[32];
    float balance;
    char type[16];
    unsigned long long int phone_num;
} Account;

void printAccount1(Account);   // call by value
void printAccount2(Account *); // call by address

void printAccount1(Account account)
{
    puts("Account1 details are:");
    printf("%-15s : %-10u \n", "Account-Num", account.acc_num);
    printf("%-15s : %-10s \n", "Acc Holder Name", account.acc_holder_name);
    printf("%-15s : %-10.2f \n", "Acc Balance", account.balance);
    printf("%-15s : %-10s \n", "Account Type", account.type);
    printf("%-15s : %10llu", "Phone Number", account.phone_num);
}

void printAccount2(Account *ptr)
{
    puts("Account1 details are:");
    printf("%-15s : %-10u \n", "Account-Num", (*ptr).acc_num);
    printf("%-15s : %-10s \n", "Acc Holder Name", ptr->acc_holder_name);
    printf("%-15s : %-10.2f \n", "Acc Balance", (*ptr).balance);
    printf("%-15s : %-10s \n", "Account Type", ptr->type);
    printf("%-15s : %10llu", "Phone Number", ptr->phone_num);
}

int main()
{
    Account acc1 = {234451, "Praveen", 45000, "employee", 9900990099L};
    Account acc2, acc3;

    acc2 = acc1; // Structures can be copied using assignment operator (whole structure is copied)

    // To copy member by member:
    // acc3.acc_holder_name = acc1.acc_holder_name; Error
    strcpy(acc3.acc_holder_name, acc1.acc_holder_name);
    acc3.acc_num = acc1.acc_num;
    acc3.balance = acc1.balance;
    strcpy(acc3.type, acc1.type);
    acc3.phone_num = acc1.phone_num;

    printAccount1(acc3);
    puts("\n----------------------------------------");
    printAccount2(&acc2);
}