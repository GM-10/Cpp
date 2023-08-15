#include<iostream>
using namespace std;
int main()
{
    int a[10]={12,18,21,27,32,56,66,78,82,90};
    int beg=0,end=9,mid,num;
    cout<<"Enter the number to be searched ";
    cin>>num;
    while(beg<end)
    {
        mid=(beg+end)/2;
        if (a[mid]==num)
        {
            cout<<"Found at postion "<<mid;
            break;
        }
        else if(num>a[mid])
        {
            beg=mid+1;//discarding the first half//
        }
        else if(num<a[mid])
        {
            end=mid-1;//discarding the second half//
        }
    }
    if(beg>end)
    cout<<"Number not found"<<endl;
    return 0;
}