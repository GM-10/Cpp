//Answer-3//
#include<iostream>
using namespace std;
int main()
{
    int phy,chem,maths;
    cout<<"Enter marks in Physics,Chemistry and Mathematics respectively: "<<endl;
    cin>>phy>>chem>>maths;
    (phy>=95)?
    ((chem>=95)?((maths>=95)?(cout<<"You get 90 percent scholarship!"<<endl):
    (cout<<"You get 80 percent scholarship!"<<endl)):
    ((maths>=95)?(cout<<"You get 80 percent scholarship!"<<endl):
    (cout<<"You get 70 percent scholarship!"<<endl))):
    ((chem>=95)?((maths>=95)?(cout<<"You got 80 percent scholarship"<<endl):
    (cout<<"You got 70 percent sholarship! "<<endl)):
    ((maths>=95)?(cout<<"You got 70 percent scholarship! "<<endl):
    (cout<<"Sorry!"<<endl)));
return 0;
}