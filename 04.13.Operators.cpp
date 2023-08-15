#include<iostream>
using namespace std;
int main()
{
  int amt,dis;
  cout<<"Enter amount : "<<endl;
  cin>>amt ;
  dis=(amt>=1000)? 10*amt/100 : 0;
  cout<<"Discount is "<<dis<<endl;
  cout<<endl;
  return 0;
}