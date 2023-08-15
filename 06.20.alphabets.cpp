#include<iostream>
using namespace std;

int main()
{
    int i,vowel=0;
    char a[10];
    cout<<"Enter ten alphabets: ";
    for(i=0;i<10;i++)
        cin>>a[i];
    cout<<"No of vowels are: "<<endl;
    for(i=0;i<10;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            vowel++;
    }
    cout<<vowel<<endl;
    return 0;
}