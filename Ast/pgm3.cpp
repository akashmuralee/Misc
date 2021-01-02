#include<iostream>
using namespace std;

int main(){
    int n;
    int r=0;
    cout<<"Enter The Number: ";
    cin>>n;

    while (n>0)
    {
        r=r*10+(n%10);
        n=n/10;
    }
    cout<<"Output is: "<<r;

    return 0;

}