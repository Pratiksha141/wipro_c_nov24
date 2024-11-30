#include <stdio.h>

typedef struct Employee
{
    int id;
    char name[32];
    float salary;
    struct Employee *ptr;
} Employee;

int main()
{
    Employee emp1 = {101, "nithin", 199000.0f, NULL};
    Employee emp2 = {102, "nikhil", 99000.0f, NULL};
    emp1.ptr = &emp2;
    printf("Emp1 Name = %s \n", emp1.name);
    printf("Emp1 Salary = %.2f \n", emp1.salary);
    printf("Emp2 Name = %s \n", emp1.ptr->name);
    printf("Emp2 Salary = %.2f \n", emp1.ptr->salary);
    printf("Emp2 Id = %.2f \n", emp2.id);
    emp2.ptr = &emp1;
    printf("Emp1 Name = %s \n", emp2.ptr->name);
    printf("Emp2 Salary = %.2f \n", emp2.salary);
    printf("Emp2 Salary = %.2f \n", emp2.ptr->ptr->salary);
}