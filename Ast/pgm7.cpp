#include<iostream>
using namespace std;

int main(){
    int n,p;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the digit: ";
    cin>>p;
    for (int i = 0; i < p; i++)
    {
        n=n*n;
    }
    cout<<n;
    
return 0;
}
