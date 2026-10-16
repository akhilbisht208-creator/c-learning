//Create a three-dimensional array and print the addresses of its elements in increasing order.

#include <stdio.h>
int main(){

    int arr[2][3][5];

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
        
            for(int k=0;k<5;k++){
                printf("Address of arr[%d][%d][%d]: %u\n", i, j, k,&arr[i][j][k]);
            }
        }
    }
    return 0;
}