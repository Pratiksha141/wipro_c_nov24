#include <stdio.h>

typedef struct StudentAge
{
    int minAge : 5;
    int maxAge : 7;
    int actualAge : 7;
} StudentAge;

typedef struct Address
{
    int doorNum;
    char areaName[32];
    char cityName[32];
    unsigned int pin;
} Address;

typedef struct Student
{
    int id;
    char name[32];
    short int semester;
    char branch[32];
    Address *ptr;
    StudentAge age;
} Student;

int main()
{
    Address address = {500, "Srirampura", "mysuru", 570014};
    Student student = {101, "ntihin", 5, "cse", NULL, {18, 75, 35}};
    student.ptr = &address;
    printf("Size of Student = %d \n", sizeof(Student));
    printf("Size of Address = %d \n", sizeof(Address));
    printf("Size of StudentAge= %d \n", sizeof(StudentAge));
    printf("Size of student = %d \n", sizeof(student));
    printf("Size of student.age = %d \n", sizeof(student.age));
    // printf("Size of student.age.minAge = %d \n", sizeof(student.age.minAge));
    printf("Size of student.address = %d \n", sizeof(student.ptr));
    puts("-------------------------------------");
    printf("Student Name = %s \n", student.name);
    printf("Student City = %s \n", student.ptr->cityName);
    printf("Student Age = %d \n", student.age.actualAge);
    printf("Student Branch = %s \n", student.branch);
    printf("Student Door Num = %s \n", student.ptr->doorNum);
}