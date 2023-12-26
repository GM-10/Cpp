#include<iostream>
using namespace std;
class Circle
{
protected:
    int r;
public:
    void input()
    {
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"Enter Radius ";
        cin>>r;
    }
    void show()
    {
        
        cout<<"Radius is :"<<r<<endl;
    }
    void area()
    {
        cout<<"Area of Circle is : "<<3.14*r*r<<endl;
    }
};
class Cylinder:public Circle
{
protected:
    int h;
public:
    void input()
    {
        Circle::input();
        cout<<"Enter height ";
        cin>>h;
    }
    void show()
    {
        Circle::show();//inheritance
        cout<<"Height is: "<<h<<endl;
    }
    void area()
    {
        cout<<"Area of Cylinder is : "<<3.14*r*r*h<<endl;
    }
};
class Cone:public Cylinder
{
protected:
    int l;
private:
    float carea;
public:
    void input()
    {
        Cylinder::input();
        cout<<"Enter Slant height ";
        cin>>l;
    }
    void show()
    {
        Cylinder::show();//inheritance
        cout<<"Slant height is: "<<l<<endl;
    }
    void area()
    {
        carea=3.14*r*r*h;
        cout<<"Area of Cone is : "<<(carea/3)<<endl;
    }
};

int main()
{
    cout<<"Single Inheritance"<<endl;
    Circle r;
    Cylinder c;
    Cone a;
    r.input();
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Circle: "<<endl;
    r.show();
    r.area();
    
    c.input();
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Cylinder: "<<endl;
    c.show();
    c.area();

    a.input();
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Cone+: "<<endl;
    a.show();
    a.area();
    return 0;
}