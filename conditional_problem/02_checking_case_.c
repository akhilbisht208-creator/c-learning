// WAP to find if a character entered by user is upper case or not

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Charcter : ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("UPPER CASE");
}
    else if(ch>='a' && ch<='z')
    {
        printf("LOWER CASE");
    }

    else
    {
        printf("NO ALPHABET");
    }
        return 0;
}