#include<iostream>
using namespace std;

int main()
{   
    int n,arr[5];
    cout<<"Enter no. of Elements: ";
    cin>>n;
    int *p;
    p=&arr[0];

    if (n>0 && n<6)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<"Enter value "<<i+1<<": ";
            cin>>arr[i];
        }

        cout<<"\n\nIndex : Value : Address"<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<i+1<<" : "<<arr[i]<<" : "<<p<<endl;
           p++;
        }
        
    }
    else
    {
        cout<<"Invalid Input";
    }
    
    
}