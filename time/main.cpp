#include <iostream>

using namespace std;

class time
{
    private:
     int HR,MIN,SEC;
     public:
        void setTime(int,int,int)
        void showTime()
        void normalization()
}
    void time::setTime(int h,int m,int s)
    {
        HR=h;MIN=m;SEC=s;
    }
    void time::showTime()
    {
        cout<<endl<<HR<<":"<<MIN<<":"<<SEC;
    }
