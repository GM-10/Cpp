//Area and circumference of circle//
#include<iostream>
using namespace std;
int main()
{
    float radius,area,cir;
    cout<<"\n\nEnter radius of circle: ";
    cin>>radius;
    area=3.14* radius*radius;
    cir=2*3.14*radius;
    cout<<"\n\nArea is "<<area<<endl;
    cout<<"\n\nCircumference is "<<cir<<endl<<endl;
    return 0;

}