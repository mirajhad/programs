#include <iostream>
#include<conio.h>
using namespace std;
float area(int);
int area(int,int);
int main()
{
    int r;
    cout<<"enter area";
    cin>>r;
    cout<<"the area of circle is"<<area(r);
    getch();
    int l,b;
    cout<<"enter length and breadth"<<area(l,b);
    cin>>l>>b;
    cout<<"the area of square is"<<area(l,b);
    getch();
}
    float area( int R)
    {
        return(3.14*R*R);
    }
    int area(int L,int B)
    {
        return(L*B);

    }

