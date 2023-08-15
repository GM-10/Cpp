#include<iostream>
using namespace std;
int main()
{
    float per;
    cout<<"Enter your percentage marks: ";
    cin>>per;
    if (per>=90)
        cout<<"Grade is A+"<<endl;
    else if (per>=80)
        cout<<"Grade is A"<<endl;
    else if (per>=60)
        cout<<"Grade is B"<<endl;
    else if (per>=50)
        cout<<"Grade is C"<<endl;
    else 
        cout<<"Grade is D"<<endl;
    return 0;
}