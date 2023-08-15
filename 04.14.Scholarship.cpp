//Scholarship//
#include<iostream>
using namespace std;
main()
{
    int p,c,m,maximum;
    cout<<"\n\n\n"<<endl;
    cout<<"Enter marks in Physics: "<<endl;
    cin>>p;
    cout<<"Enter marks in Chemistry: "<<endl;
    cin>>c;
    cout<<"Enter marks in Mathematics: "<<endl;
    cin>>m;
    cout<<"\n\n\n"<<endl;
    (p>90)?cout<<"Congo!"<<endl:(c>90)? cout<<"Congo!"<<endl:(m>90)?cout<<"Congo!"<<endl:cout<<"Sorry :("<<endl;
    cout<<"\n\n\n"<<endl;
    return 0;
}