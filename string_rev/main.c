#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100],ch;
    int i,l;
    printf("enter a string");
    gets(s);
    for(l=0;l<=s[l];l++);
        for(i=0;i<=l/2;i++){
        ch=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=ch;
    }
    printf("the rev of string is %s",s);
}
