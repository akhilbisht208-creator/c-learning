//Write a program with a structure representing a complex number.
#include <stdio.h>
typedef struct complex{
    int real;
    int imaginary;
}complex;

int main(){
    complex c={1,2};
    printf("Complex nuber %d + %di",c.real,c.imaginary);
    return 0;
}