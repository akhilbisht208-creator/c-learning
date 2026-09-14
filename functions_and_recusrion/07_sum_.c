//Write a recursive function to calculate the sum of first 'n' natural numbers.

#include<stdio.h>

int sum(int n){
    if(n==1){
        return 1;
    }
    return sum(n-1)+n;

}
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int add = sum(n);
    printf("sum :  %d ",add);



     return 0;
}  
