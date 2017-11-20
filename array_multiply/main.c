#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
    printf("ente first matrix");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
        scanf("%d",&a[i][j]);
    printf("enter secound matrix");
    for(i=0;j<=2;j++)
        for(j=0;j<=2;j++)
        scanf("%d",&b[i][j]);
    for(i=0;j<=2;j++)
        for(j=0;j<=2;j++)
    {
        for(k=0;k<=2;k++)
        {
            c[i][j]=sum+a[i][j]*b[i][j];
            printf("%d",c[i][j]);
        }
    }

}
