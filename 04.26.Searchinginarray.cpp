#include<iostream>
using namespace std;
int main()
{
    int a[10]={8,12,70,22,40,20};
    int i,j,num,pos,n=6,b=0;
    char ans;
    do
    {
        cout<<"Enter the number to be searched: ";
        cin>>num;
        for (i=0;i<n;i++)
        {
            if(a[i]==num)
            {
                b+=1;
                cout<<"Position: "<<i<<endl;
            }
            else
            b+=0;
        }
        if (b==0)
        cout<<"Not found!"<<endl;
        cout<<endl<<"Do you want to search for more? :";
        cin>>ans;
    } while (ans=='y' || ans=='Y');
    return 0;
}