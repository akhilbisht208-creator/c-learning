//Write your own version of strlen function from <string.h> .
#include <stdio.h>


int str_len(char str[]){
    int len=0;
    int i=0;
  
    while(str[i]!='\0'){
        len=len+1;
        i++;
    }
    return len;

}


int main(){
    char str[]="Akhil bhai";
    int len = str_len(str);
    printf("%d", len);
    return 0;
}