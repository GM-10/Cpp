//Roots of the of quadratic equation//
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,d,r1,r2;
    cout<<"Enter values of a, b and c :";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d<0)
        cout<<"No real roots exists.";

    if(d==0)
        {cout<<"Equal and real roots. "<<endl;
        r1=r2=-b/(2*a);
        cout<<"Roots are "<<r1<< " and "<<r2<<" . "<<endl;
        }
    if(d>0)
    {
        cout<<"Unequal real roots. "<<endl;
        r1=(-b+ sqrt(d))/(2*a);
        r2=(-b- sqrt(d))/(2*a);
        cout<<"Roots are "<<r1<< " and "<<r2<<" . "<<endl;
    }
    cout<<endl<<endl;
    return 0;
}