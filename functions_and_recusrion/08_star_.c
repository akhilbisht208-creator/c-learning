//Write a program using function to print the following pattern (first n lines):
//*
//***
//*****
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int j=1;j<=n;j++){
        for(int i=1;i<=2*j-1;i++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}