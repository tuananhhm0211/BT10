#include<iostream>
using namespace std;
struct point{
    double x;
    double y;
    point(double _x,double _y)
    {
        x=_x;y=_y;
    }
    point();

};
point mid_point(point a,point b)
{
    point c((a.x+b.x)/2,(a.y+b.y)/2);
    return c;
}
void print(point a)
    {
        cout << "(" << a.x << "," << a.y << ")";
    }
int main()
{
    point a(2,4),b(2,2);
    point c=mid_point(a,b);
    print(c);
}
