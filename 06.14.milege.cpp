/*A farmer has a rectangular field of certain breadth and length.
If it costs Rs. 50 to fence 1 meter of the farm.
What will be total cost to fence the farm?*/
#include<iostream>
using namespace std;
int main()
{
    int breadth, length, perimeter, price;
    cout<<"Enter the breadth of the farm: ";
    cin>>breadth;
    cout<<endl;
    cout<<"Enter the length of the farm: ";
    cin>>length;
    cout<<endl;
    perimeter= 2*(length+breadth);
    cout<<"Perimeter of the farm is: "<<perimeter<<endl;
    price=perimeter*50;
    cout<<"Price of fencing is "<<price<<endl;
    return 0;
}