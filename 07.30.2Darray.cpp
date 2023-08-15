#include<iostream>
using namespace std;
class Point
{
    int x,y;
public:
    void input()
    {
        cout<<"Enter x and y: ";
        cin>>x>>y;
    }
    void show()
    {
        cout<<"Point is ( "<<x<<" , "<<y<<endl;
    }
    void isCollinear(Point t,Point k)
    {
        if((x==t.x && t.x==k.x) || (y==t.y && t.y==k.y))
        cout<<"Points are Collinear"<<endl;
        else
        cout<<"Point are non collinear"<<endl;
    }
};
int main()
{
    Point p1,p2,p3;
    p1.input();
    p2.input();
    p3.input();
    p1.isCollinear(p2,p3);
    return 0;
}