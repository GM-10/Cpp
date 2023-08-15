#include<iostream>
using namespace std;
union Incentive
{
    int overtime;
    double comm;
    int equity;
};
int main()
{
    Incentive a;
    cout<<sizeof(a)<<endl;
    cout<<"Enter overtime ";
    cin>>a.overtime;
    cout<<"Overitme earned is "<<a.overtime<<endl;
    return 0;
}