//Write a program to illustrate the use of arrow operator -> in C.
#include <stdio.h>
struct student{
    int age;
};
int main(){
    struct student age={20};
    struct student *ptr=&age;
    printf("%d",ptr->age);
    return 0;
}