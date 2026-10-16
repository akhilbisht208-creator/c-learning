//Write a program to create an array of 10 integers and store multiplication table of 5 in it.

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number for which you want the multiplication table:\n");
    scanf("%d", &n);
    int array[10];
    for(int i=1;i<=10;i++){
        array[i-1]=i*n;
        printf("%d X %d = %d\n",n,i,array[i-1]);
    }

}


/*
-----------------------------KEY CONCEPTS-----------------------------
If you used array[i], the last iteration would access array[10], which is out of bounds.
Remember: Array of size 10 → valid indices are 0 to 9.
*/