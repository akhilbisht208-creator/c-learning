// WAP using function to find average of three numbers
#include<stdio.h>

float average(float a,float b,float c)
{
    return (a+b+c)/3;
}
int main()
{
    float a,b,c,avg=0;
    printf("Enter the value of three numbers : ");
    scanf("%f%f%f",&a,&b,&c);
    avg=average(a,b,c);
    printf("The average of %f,%f and %f is %f",a,b,c,avg);
    return 0;
}