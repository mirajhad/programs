#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter number upto you want");
    scanf("%d",&n);
    while(n)
    {
        printf("%d\n",2*n);
        n--;
    }
}
