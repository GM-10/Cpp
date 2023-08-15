#include<iostream>
using namespace std;
class Student
{
private://it restricts the operation to done under the given introduced variables.
    int rno;
    char name[30];
    float marks;
public:
    void input()
    {
    cout<<"Enter Roll no., name and marks ";
    cin>>rno>>name>>marks;
    }
    void show()
    {
        cout<<name<<" scored "<<marks<<endl;
    }
};
int main()
{
    Student a;
    a.input();
    a.show();    
    return 0;
}