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
void print(point a)
    {
        cout << "(" << a.x << "," << a.y << ")";
    }
int main()
{
    point a(2,3);
    print(a);
    return 0;
}
