#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,s,n,N,sum=0;
printf("enter number\n");
scanf("%d",&N);
for(n=1;n<=N;n++){
    s=0;
    for(i=1;i<=n;i++)
        s=s+i;
        sum=sum+s;
}
    printf("the sum is %d",sum);
}
