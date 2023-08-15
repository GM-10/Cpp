#include<iostream>
using namespace std;
int main()
{
    int a[10][10];
    int i,j,r,c,sum1=0,sum2=0,k,a1=0,temp;
    cout<<"Enter the number of rows and columns:";
    cin>>r>>c;
    if (r==c)
    {cout<<"Enter the matrix elements: ";//entering the matrix elements//
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }
    for(i=0; i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if (i==j)
                {
                    temp=a[i][j];
                    sum1+=temp;
                }
                else if(i!=j)
                {
                    for(k=0;k<c;k++)
                {
                    sum2+=a[k][r];
                    r--;
                }
                }
            }
        }
    }
    else
        cout<<"There are unequal no. of rows and columns."<<endl;
    cout<<"The sum of first diagonal is: "<<sum1<<endl;
    cout<<"The sum of second diagnol is: "<<sum2<<endl;
    return 0;
}