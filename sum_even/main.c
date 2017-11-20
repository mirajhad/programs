#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,s=0,i=2;
   printf("enter number");
   scanf("%d",&n);
   while(i<=2*n){
    s=s+i;
    i=i+2;
   }
    printf("the sum of even number %d",s);
   }

