#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    int salary;
    char name[20];
};

int main(){
    struct employee e1;
    strcpy(e1.name,"Akhil");
    e1.salary=1200000;
    e1.code=323232;
    printf("Name = %s\nSalary = %d\nCode=%d",e1.name,e1.salary,e1.code);
    

    return 0;
}