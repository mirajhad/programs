#include <iostream>
#include<conio.h>

using namespace std;
fact(int n)
{

if(n>0)
    return(n*fact(n-1));
else
    return(1);
}
int main()
{
    printf("the factorial of 5 is %d",fact(5));
    getch();
}



