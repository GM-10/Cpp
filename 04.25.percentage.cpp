//Percentage calculator//
#include<iostream>
using namespace std;
int main()
{
    int n[5],i,pass=0,fail=0,num,b,tot=0;
    cout<<"Enter number of students: ";
    cin>>num;
    float per[num];
    int total[num],res[num];
    for(b=0;b<num;b++)
    {
        tot=0;
        cout<<"Student "<<b+1<<endl;
        cout<<"Enter marks of 5 subjects: ";
        for (i=0;i<5;i++)
        {
            cin>>n[i];
        }
        for(i=0;i<5;i++)
            {
                tot+=n[i];
            }
        total[b]=tot;
        per[b]=total[b]/5;
        if(per[b]>=50)
        {
            res[b]=1;
            pass++;
        }
        else
        {
            res[b]=0;
            fail++;
        }
    }
    cout<<"S.No.\t"<<"Total\t\t"<<"Percent\t"<<"Result\t"<<endl;
    for (b=0;b<num;b++)
    {
        if (res[b]==1)
        {
            cout<<b+1<<"\t"<<total[b]<<"\t\t"<<per[b]<<"\tPASS"<<endl;
        }
        else
        {
            cout<<b+1<<"\t"<<total[b]<<"\t\t"<<per[b]<<"\tFAIL"<<endl;
        }
    }
    cout<<"Number of students passed: "<<pass<<endl;
    cout<<"Number of students Failed: "<<fail<<endl;
    return 0;
}