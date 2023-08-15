#include<iostream>
using namespace std;
int main()
{
    int a[10]={8,12,70,22,40,20};
    int i,num,pos,n=6;
    char ans;
    do
    {
        if(n==10)
        {cout<<"Sorry array is full."<<endl;
        break;}
        cout<<"Enter the number to be added: ";
        cin>>num;
        cout<<"Enter postion: ";
        cin>>pos;
        if (pos<10)
        {   if(pos>n)
                {cout<<"Entered postion is not sequential!"<<endl;}
            else
            {
                for(i=n;i>pos;i--)
                    a[i]=a[i-1];
                a[pos]=num;
                n++;
                cout<<"Array after insertion is "<<endl;
                for(i=0;i<n;i++)
                    cout<<a[i]<<"\t";
            }
        }
        else
        {cout<<"Invalid position entered!";}
        cout<<endl<<"Do you want to enter more? :";
        cin>>ans;
    } while (ans=='y' || ans=='Y');
    return 0;
}