#include<iostream>
#include<string.h>
using namespace std;
class Complex
{
    int real,img;
public:
    void input()
    {
        cout<<"Enter real and imaginary part: ";
        cin>>real>>img;
    }
    void show()
    {
        cout<<"Complex No. is "<<real<<" +i "<<img<<endl;
    }
    bool operator ==(Complex t)//operator overloading
    {
        if(real==t.real && img==t.img)
            return true;
        else
            return false;
    }
    Complex operator +(Complex t)//operator overloading
    {
        Complex s;
        s.real=real+t.real;
        s.img=img+t.img;
        return s;
    }
};
int main()
{
    Complex a,b,c,d,e;
    a.input();
    b.input();
    c.input();
    d.input();
    a.show();
    b.show();
    c.show();
    d.show();
    if(a==b && b==c && c==d )
        cout<<"Complex numbers are equal "<<endl;
    else
        cout<<"Not equal"<<endl;
    e=a+b+c+d;//no need to write extra line only in cpp.
    e.show();
    return 0;
}