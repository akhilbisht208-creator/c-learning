//Write a program containing functions which counts the number of positive integers in an array.
#include <stdio.h>
int count_positive(int arr[]){
    int count=0;
    for(int i=0;i<10;i++){
        if(arr[i]>0){
            count=count+1;
        }
    }
    return count;
}
int main(){
    int arr[10]={1,2,-3,4,-5,6,7,8,9,-10};
    int count=count_positive(arr);
    printf("Number of positive integer in array is %d  ",count);
    return 0;
}