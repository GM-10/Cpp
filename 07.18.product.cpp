#include<iostream>
using namespace std;
struct product
{
    char name[50];
    int cost,qty;
};
int main()
{
    int amount[50],bill=0;
    product a[5];
    cout<<"Enter the name, cost and quantity of the product: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Product "<<i+1<<endl;
        cin>>a[i].name>>a[i].cost>>a[i].qty;
    }
    cout<<"Name\tcost\tquantity\tamount\t"<<endl;
    for(int i=0;i<5;i++)
    {
        amount[i]=a[i].cost*a[i].qty;
        cout<<a[i].name<<"\t"<<a[i].cost<<"\t"<<a[i].qty<<"\t"<<amount[i]<<endl;
        bill+=amount[i];
    }
    cout<<"The total bill is: "<<bill<<endl;
    return 0;
}