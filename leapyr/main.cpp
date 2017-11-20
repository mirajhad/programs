#include <iostream>
#include<conio.h>0

using namespace std;

int main()
{
    int year;
    cout<<"enter the year";
    cin>>year;
    if(year%400==0 ||year%100!=0&&year%4==0)
cout<<"leap year";
else
    cout<<"not leap year";
getch();
}
