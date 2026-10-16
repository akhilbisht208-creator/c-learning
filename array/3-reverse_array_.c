//Write a program containing a function which reverses the array passed to it.

#include <stdio.h>

void rev_arr(int arr[]){
    int temp;
    for(int i=0;i<5;i++){
    temp = arr[i];
    arr[i] = arr[9-i];
    arr[9-i] = temp;
    }

}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    rev_arr(arr);
    for(int i=0;i<10;i++){
        printf("%d\n",arr[i]);

    }
    return 0;
}