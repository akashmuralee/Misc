#include<iostream>
using namespace std;

int main(){
    
    long long n;
    int i=1;
    long long f=1;

    cin>>n;
    if (n>0)
    {
        while (f<n){
            i++;
            f=f*i;
        }
        if (f==n){
            cout<<i;
        }
        else{
            cout<<"Sorry.The given number is not a perfect factorial";
        }
    }
    else
    {
        cout<<"Invalid Input";
    }
 
}