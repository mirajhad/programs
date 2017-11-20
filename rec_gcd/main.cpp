#include <iostream>
#include<conio.h>

using namespace std;
gcd(int a,int b)
{
    if(a==b)
        return(a);
    if(a%b==0)
        return(b);
    if(b%a==0)
        return(a);
    if(a>b)
       return(gcd(a%b,b));
       else
        return(gcd(b%a,a));
}

int main()
{
    printf("the gcd is %d",gcd(105,91));
    getch();
}

