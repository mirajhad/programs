#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x;
    printf("enter  a number");
    scanf("%d",&i);
    for(i=2;i<=x-i;i=nextprime(i)){
        if(isprime(x-i))
            printf("%d and %d\n",i,x-i,x);
    }
   int nextprime(int n)
   {
       do
       n++;
        while(!isprime(n));
        return(n);
   }
       int isprime(n)
       {
           int i;
           for(i=2;i<n;i++){
            if(i%2==0)
                return(0);
                return(1);
           }
       }
}
