#include<iostream>
using namespace std;
struct point{
    double *p=new double[2];
    double x;
    double y;
    point(double _x,double _y)
    {
        x=_x;y=_y;
    }

};
int main()
{
    point a(2,3);
    point b=a;
    cout << &a << " " << a.p << " " << &a.x << " " << &a.y << endl;
    cout << &b << " " << b.p << " " << &b.x << " " << &b.y << endl;
}
