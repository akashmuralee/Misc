#include<iostream>
using namespace std;

int main()
{
    int first,nth,t=1,num,sum=0,i;
    cout<<"Enter the first number: ";
    cin>>first;
    cout<<"Enter the nth number: ";
    cin>>nth;

    for (i = first; i < first+nth; i++)
    {
        if (t%2==1)
        {
            num=i*(-1);
            cout<<num;
            
        }
        else
        {   num=i;
            cout<<"+"<<num;
        }
        
        sum=sum+num;
        t++;
    }
    
    
    cout<<" = "<<sum<<endl;
    
    if (sum>0)
    {
        cout<<"\nThe sum of the series is a positive number";
    }
    else
    {
        cout<<"\nThe sum of the series is a negative number";
    }

}