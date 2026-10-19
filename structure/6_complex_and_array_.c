//Create an array of 5 complex numbers created in Problem 5 and 
// display them with the help of a display function. 
// The values must be taken as an input from the user.

#include <stdio.h>
typedef struct complex{
    int real;
    int imaginary;
}complex;
void display(complex c){
    printf("Complex number %d + %di ",c.real,c.imaginary);
}
int main(){
    complex carr[5];
    for(int i=0;i<5;i++){
    printf("Enter real part : ");
    scanf("%d",&carr[i].real);
    printf("Enter imaginary  part : ");
    scanf("%d",&carr[i].imaginary);
    display(carr[i]);
    }

    return 0;
}