//code to print the day of the week according to the number input//
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"\n\n\n";
    cout<<"Enter the number of which you wnat to see the day: "<<endl;
    cin>>num;
    switch(num)
    {
        case 1:
        cout<<"Sunday"<<endl;
        break;
        case 2:
        cout<<"Monday"<<endl;
        break;
        case 3:
        cout<<"Tuesday"<<endl;
        break;
        case 4:
        cout<<"Wednesday"<<endl;
        break;
        case 5:
        cout<<"Thursday"<<endl;
        break;
        case 6:
        cout<<"Friday"<<endl;
        break;
        case 7:
        cout<<"Saturday"<<endl;
        break;
        default:
        cout<<"INvalid day number! "<<endl;
        break;
    }
    return 0;
}
