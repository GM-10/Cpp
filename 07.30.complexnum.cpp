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
    bool equals(Complex t)
    {
        if(real==t.real && img==t.img)
            return true;
        else
            return false;
    }
    Complex add(Complex t)
    {
        Complex s;
        s.real=real+t.real;
        s.img=img=t.img;
        return s;
    }
};
int main()
{
    Complex a,b,c;
    a.input();
    b.input();
    a.show();
    b.show();
    if(a.equals(b))
        cout<<"Complex numbers are equal "<<endl;
    else
        cout<<"Not equal"<<endl;
    c=a.add(b);
    return 0;
}