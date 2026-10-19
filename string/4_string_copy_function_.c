//Write your own version of strcpy function from <string.h>

#include <stdio.h>
void str_cpy(char str1[],char str2[]){
    int i=0;
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    

}
int main(){ 
    char str1[11]="Akhil bhai";
    char str2[11];
    str_cpy(str1,str2);
    
    printf("%s",str2);


    return 0;
}