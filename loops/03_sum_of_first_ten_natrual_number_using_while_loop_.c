//Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>
int main(){
    int n=1,sum=0;
    while(n<=10){
        sum=sum+n;
        n++;
    }
    printf("%d",sum);
    
    return 0;
}