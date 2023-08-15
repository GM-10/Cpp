#include<iostream>
using namespace std;
int main()
{
    int n,i,total=0;
    cout<<"How many products? ";
    cin>>n;
    int qty[n],cost[n],amt[n];
    cout<<"Enter the cost and quantity"<<endl;
    for (i=0;i<n;i++)
    {
        cout<<"product"<<i+1<<endl;
        cin>>cost[i]>>qty[i];
    }
    cout<<"Bill"<<endl;
    cout<<"s.no.   cost   Quantity   Amount"<<endl;
    for(i=0;i<n;i++)
    {
        amt[i]=cost[i]*qty[i];
        cout<<i+1<<"      "<<cost[i]<<"        "<<qty[i]<<"       "<<amt[i]<<endl;
        total+=amt[i];
    
    }
    cout<<"Total bill: "<<total<<endl;
    return 0;
}