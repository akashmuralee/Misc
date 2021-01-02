#include<iostream>
using namespace std;

int main(){
    int gr,n;
    cin>>gr;
    if (gr<0)
    {
        cout<<"Invalid Input";
        return 0;
    }
    

    for (int i = 0; i < 5; i++)
    {
        cin>>n;
        if (n<0)
        {
            cout<<"Invalid Input";
            return 0;
        }
        
        else if (n>gr)
        {
            gr=n;
        }
    }
    cout<<"Highest Mark is "<<gr;

return 0;
}
