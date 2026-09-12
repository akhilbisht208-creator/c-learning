#include <stdio.h>
int n;
int fact(int n){


    if(n==1 || n==0 ){

        return 1;
}
    return fact(n-1)*n;
}

int main(){
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("The factorial of %d is %d ",n,fact(n) );



    return 0;
}