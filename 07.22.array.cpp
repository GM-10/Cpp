#include<iostream>
using namespace std;
class Array
{
    int a[20];
    int n;
public:
    void input();
    void show();
    int search(int);
    void sort();
};
int main()
{
    Array p,q;
    p.input();
    q.input();
    p.show();
    q.show();
    cout<<"15 found at "<<p.search(15)<<endl;
    cout<<"15 found at "<<q.search(15)<<endl;
    p.sort();
    q.sort();
    p.show();
    q.show();
    return 0;
}
void Array::input()
{
    cout<<"Enter the number of element: ";
    cin>>n;
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void Array::show()
{
    cout<<"\n Array elements are "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<'\t';
    }
    cout<<endl;
}
int Array::search(int num)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
            return i;
    }
    return -1;
}
void Array::sort()
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
        
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
    }
}