#include<iostream>
using namespace std;
int main()
{
    char str1[20],str2[20];
    int i,j,n=0;
    cout<<"Enter String 1:  ";
    cin>>str1;
    cout<<"Enter String 2: ";
    cin>>str2;
    for(int i=0; str1[i] != '\0';i++);
    for(int j=0; str2[i] != '\0';j++);
    if(i!=j)
        cout<<"Both string are of different length!"<<endl;
    else
    {
        for (int a=0 ; a<=n ;a++)
        {
            if (str1[a]==str2[a])
                n++;
        }
    }
    if(n==i)
    cout<<"Both strings are same."<<endl;
    else
    cout<<"Both are different. "<<endl;

}