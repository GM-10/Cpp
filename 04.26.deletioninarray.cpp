#include<iostream>
using namespace std;
int main()
{
    int a[10]={8,12,70,22,40,20};
    int i,j,num,pos,n=6,b=0;
    char ans;
    do
    {
        if(n==0)
        {cout<<"Sorry array is empty."<<endl;
        break;}
        cout<<"Enter the number to be deleted: ";
        cin>>num;
        for (i=0;i<n;i++)
        {
            if(a[i]==num)
            {
            
            for(j=i;j<(n-1);j++)
                a[j]=a[j+1];
            i--;
            n--;
            b+=1;            
            cout<<"Array after deletion is "<<endl;
            for(i=0;i<n;i++)
                cout<<a[i]<<"\t";
            }
            else
            b+=0;
        }
        if (b==0)
        cout<<"Not found!"<<endl;
        cout<<endl<<"Do you want to delete more? :";
        cin>>ans;
    } while (ans=='y' || ans=='Y');
    return 0;
}