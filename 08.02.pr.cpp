#include<iostream>
#include<string.h>
using namespace std;
class Product
{
    int pid;
    char name[30];
    int cost;
public:
    Product()
    {
        pid=0;
        strcpy(name,"Not Given");
        cost=0;
    }
    Product(int x, char t[],int z)
    {
        pid=x;
        strcpy(name,t);
        cost=z;
    }
    Product(Product &t)
    {
        pid=t.pid;
        strcpy(name,t.name);
        cost=t.cost;
    }
    void setId(int x)//setter method.
    {
        pid=x;
    }
    void setName(char n[20])
    {
        strcpy(name,n);
    }
    void setCost(int c)
    {
        cost=c;
    }
    int getId()//getter method
    {
        return pid;
    }
    void show()
    {
        cout<<"Product ID is "<<pid<<endl;
        cout<<"Name is "<<name<<endl;
        cout<<"Cost is "<<cost<<endl;
    }
};
int main()
{
    Product p;
    p.show();
    p.setName("Pen");
    p.show();
    return 0;
}