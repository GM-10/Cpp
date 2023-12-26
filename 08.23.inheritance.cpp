#include<iostream>
using namespace std;
class Rectangle
{
protected:
    int l,b;
public:
    void input()
    {
        cout<<"Enter length ";
        cin>>l;
        cout<<"Enter breadth ";
        cin>>b;
    }
    void show()
    {
        cout<<"Length is :"<<l<<endl;
        cout<<"Breadth is : "<<b<<endl;
    }
    void area()
    {
        cout<<"Area of rectangle is: "<<l*b<<endl;
    }
};
class Cuboid:public Rectangle
{
    int h;
public:
    void input()
    {
        Rectangle::input();
        cout<<"Enter height ";
        cin>>h;
    }
    void show()
    {
        Rectangle::show();//inheritance
        cout<<"Height is: "<<h<<endl;
    }
    void area()//Function overwriting
    {
        cout<<"Area of cuboid is : "<<2*((l*b)+(b*h)+(h*l))<<endl;
    }
};
int main()
{
    cout<<"Single Inheritance"<<endl;
    Rectangle r;
    Cuboid c;
    r.input();
    r.show();
    r.area();
    c.input();
    c.show();
    c.area();
    return 0;
}