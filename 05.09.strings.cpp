#include<iostream>
using namespace std;
int main()
{
    char name[20];
    int i,n=0;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Welcome "<<name<<endl;
    for(int i=0; name[i] != '\0';i++)
    {
       if(name[i]>='a' && name[i]<='z')
        name[i] -=32;
    }
    cout<<"Welcome "<<name<<endl;
    return 0;
}