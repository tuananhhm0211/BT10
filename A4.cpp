#include<iostream>
using namespace std;
struct point{
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
    cout << &a << endl;
    cout << &a.x << " " << &a.y;
    return 0;
}
