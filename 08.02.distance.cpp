#include<iostream>
using namespace std;
class Distance
{
private:
    int km,m;
    float dist;
public:
    Distance()
    {
        dist=0;
    }
    void input()
    {
        cout<<"Enter the distance in km and m: ";
        cin>>km>>m;
        dist=km+(0.001*m);
    }
    void show()
    {
        cout<<"Distance: "<<dist<<endl;
    }
    bool operator ==(Distance t)
    {
        if(dist==t.dist)
            return true;
        else 
            return false;
    }
    Distance operator +(Distance t)
    {
        Distance x;
        x.dist=dist+t.dist;
        return x;
    }
    bool operator <(Distance u)
    {
        if(dist<u.dist)
            return true;
        else
            return false;
    }
};
int main()
{
    Distance a,b,c,d;
    a.input();
    //b.input();
    //c.input();
    a.show();
    b.show();
    c.show();
    if(a==b & b==c)
        cout<<"Equal"<<endl;
    else
    {   
        cout<<"Not equal"<<endl;
        if(a<b && a<c)
        cout<<"a is small"<<endl;
        else if(b<a && b<c)
        cout<<"b is small"<<endl;
        else
        cout<<"c is small"<<endl;
    }
    d=a + b + c;
    cout<<"Sum ";
    d.show();
    cout<<endl;    
    return 0;
}

