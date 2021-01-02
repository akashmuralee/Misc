#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the value of side1 : ";
    cin>>a;
    cout<<"Enter the value of side2 : ";
    cin>>b;
    cout<<"Enter the value of side3 : ";
    cin>>c;
    if (a<=0||b<=0||c<=0)
    {
        cout<<"Invalid Input";
    }
    else
    {
        if ((a+b>c)&&(b+c>a)&&(c+a>b))
        {
            cout<<"Sides of a Triangle";
        }
        else
        {
            cout<<"Sides does not form a Triangle";
        }
        
        
    }
    
    
    


return 0;
}