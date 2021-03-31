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
    cout << &a << endl;
}
void printb(point& a)
{
    cout << &a << endl;
}
int main()
{
  point a(4,5);
  cout << &a << endl;
  print(a);
  printb(a);
}
