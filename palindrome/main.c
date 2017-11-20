#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,l;
    char str[20];
    printf("enter a string");
    gets(str);
    l=strlen(str);
    for(i=0;i<l/2;i++){
        if(str[i]!=str[l-1-i]){
            printf("string is not palindrome");
            break;
        }
    }
    if(i==l/2)
        printf("palindrome");
}
