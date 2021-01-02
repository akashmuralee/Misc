#include<iostream>
#include<string.h>
using namespace std;

int main()
{ 
    string PAN;
    int f=0;
    cout<<"Enter the PAN no: ";
    getline (cin, PAN);
    int n=PAN.length();
    if (n==10)
    {
        for (int i = 0; i < 10; i++)
        {
            if (i<5)
            {
                if (PAN[i]<'A'||PAN[i]>'Z')
                {
                    f=1;
                }
                
            }
            else if (i<9)
            {
                if (PAN[i]<'0'||PAN[i]>'9')
                {
                    f=1;
                }
            }
            else
            {
                if (PAN[i]<'A'||PAN[i]>'Z')
                {
                    f=1;
                }
            }    
        }
        if (f==1)   
        {
            cout<<"INVALID PAN NUMBER";
        }
        else
        {
            cout<<"VALID PAN NUMBER";
        }
    }
    else
    {
        cout<<"INVALID PAN NUMBER";
    }
    
    return 0;
}
