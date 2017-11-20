#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2,s=0,x;
    printf("enter a number");
    scanf("%d",&x);
    while(i<=2*x)
    {
        s=s+i;
        i=i+2;
    }
        printf("sum of even number %d\n ",s);
}
