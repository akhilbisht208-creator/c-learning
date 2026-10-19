//Write a program to store the details of 3 employees from user defined data. Use the structure declared above.

#include <stdio.h>

struct employee {
    char name[20];
    int age;
    int salary;
};

int main() {
    struct employee e1, e2, e3;

    printf("Enter details of Employee 1:\n");
    printf("Enter name, age and salary: ");
    scanf("%19s %d %d", e1.name, &e1.age, &e1.salary);

    printf("\nEnter details of Employee 2:\n");
    printf("Enter name, age and salary: ");
    scanf("%19s %d %d", e2.name, &e2.age, &e2.salary);

    printf("\nEnter details of Employee 3:\n");
    printf("Enter name, age and salary: ");
    scanf("%19s %d %d", e3.name, &e3.age, &e3.salary);

    printf("\n--- Employee Details ---\n");

    printf("\nName = %s\nAge = %d\nSalary = %d\n",
           e1.name, e1.age, e1.salary);

    printf("\nName = %s\nAge = %d\nSalary = %d\n",
           e2.name, e2.age, e2.salary);

    printf("\nName = %s\nAge = %d\nSalary = %d\n",
           e3.name, e3.age, e3.salary);

    return 0;
}
