//Write a program using a function which calculates the sum and average of two numbers. 
//Use pointers and print the values of sum and average in main()

#include <stdio.h>

void sum_and_average(int *a,int *b,int* sum,float* avg);

void sum_and_average(int *a,int *b,int* sum,float* avg){
    *sum=*a+*b;
    *avg=(*a+*b)/2.0;


}
int main() {
    int a=10,b=40;
    int sum;
    float avg;
    sum_and_average(&a,&b,&sum,&avg);
    printf("Sum of %d and %d is %d\n",a,b,sum);
    printf("Average of %d and %d is %.2f\n",a,b,avg);
    return 0;
}