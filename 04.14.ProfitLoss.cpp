//Profit and Loss//
#include<iostream>
using namespace std;
main()
{
    int sp,cp,pl;
    cout<<"\n\n\n\nEnter selliing price"<<endl;
    cin>>sp;
    cout<<"\n\nEnter cost price"<<endl;
    cin>>cp;
    cout<<"\n\n\n"<<endl;
    (sp>cp)? cout<<"Profit is: "<<(sp-cp)<<endl: cout<<"Enter loss is: "<<(cp-sp)<<endl;
    cout<<"\n\n\n\n"<<endl;
    return 0;
}