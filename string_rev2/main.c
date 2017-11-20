#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char s[100],ch;
    int l,i;
    printf("enter string");
    gets(s);
    for(l=0;l<=s[l];l++);
    for(i=0;i<=l/2;i++){
        ch=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=ch;

    }
    printf("the rev of string %s",s);
}
