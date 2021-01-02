#include<iostream>
using namespace std;

int main(){
    float sal,per;
    cout<<"Enter the salary: ";
    cin>>sal;
    cout<<"Enter the Performance appraisal rating: ";
    cin>>per;

    if (sal<=0||per<1.0||per>5.0)
    {
        cout<<"Invalid Input";
    }
    else {
        if (per<3.1)
        {
            sal=sal+(sal*0.1);
        }
        else
        {
            if (per<4.1)
            {
                sal=sal+(sal*0.25);
            }
            else
            {
                sal=sal+(sal*0.3);
            }
            
            
        }
    cout<<sal;
    }
    return 0;
}