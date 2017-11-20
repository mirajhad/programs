#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s=0,i=1;
    printf("enter number to print number");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+2*i-1;
        i++;
    }
    printf("the sum of odd number are %d",s);
}
