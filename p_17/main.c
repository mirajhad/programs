#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k=0;
    for(i=1;i<=7;i++){
            k=7-i;
        for(j=1;j<=7;j++){
            if(j<=8-i){
                printf("%d",k);
                k--;}
            else
                printf(" ");
        }
        printf("\n");
    }
}
