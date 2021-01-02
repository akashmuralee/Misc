#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter no of hours worked in a day:";
cin>>n;
if (n>=0)
{
    n=365*100*n;
    cout<<"Total no of hours worked in a day:"<<n;
}
else
{
    cout<<"Unable to calculate the earnings";
}

return 0;
}