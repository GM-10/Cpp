#include<iostream>
using namespace std;
int main()
{
    int breadth, length, area, perimeter;
    cout<<"Enter the breadth of the shape: ";
    cin>>breadth;
    cout<<"Enter the length of the shape: ";
    cin>>length;
    if(breadth==length)
    cout<<"The given shape is square."<<endl;
    else
    cout<<"The given shape is rectangle. "<<endl;
    area=length*breadth;
    perimeter=2*(length+breadth);
    cout<<"Press-1 Area Press-2 Perimeter"<<endl;
    int n;
    cin>>n;
    if (n==1)
    cout<<"Area of the shape is: "<<area<<endl;
    else if (n==2)
    cout<<"Perimeter of the shape is: "<<perimeter<<endl;
    else
    cout<<"Enter a valid option.";
    
}