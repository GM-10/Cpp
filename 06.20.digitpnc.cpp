#include<iostream>
using namespace std;

int main()
{
    int a[3],i,j,m=0,k;
    cout<<"Enter the numbers: ";
    for(i=0;i<3;i++)
        cin>>a[i];
    cout<<"Possible combinations are: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                if(i!=j && j!=k && k!=i)
                {
                    m=a[k]*100+a[j]*10+a[i];
                    cout<<m<<endl;
                }
            }
        }
    }return 0;
}