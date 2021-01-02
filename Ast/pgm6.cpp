#include<iostream>
using namespace std;

int main(){
    int n;
    int r=0;
    cout<<"Enter The Number: ";
    cin>>n;
    int t=n;
    if(n>=0){
    while (n>0)
    {
        r=r*10+(n%10);
        n=n/10;
    }
    
    if (t==r)
    {       
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";

    }
    }
    else
    {
        cout<<"Invalid Input";
    }
    
    
    return 0;
}