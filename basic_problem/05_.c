//Write a program to calculate simple interest for a set of values representing principal,
//number of years, and rate of interest.

#include<stdio.h>
int p,r,t;

int main()
{
    printf("Enter the principal amount : ");
    scanf("%d",&p);
    printf("For how much year you want depposit you amount : ");
    scanf("%d",&t);
    r=6;

    int simple_interset=(p*r*t)/100;
    
    printf("Simple Interset Amount is %d ",simple_interset); 
    return 0;
}