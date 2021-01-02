#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        int empId;
        string empName;
        string empAddress;
    public:
        virtual double calculateSalary()
        { 
            return 0;
        };
        void inputBasic()
        {
            cout<<"\n\nEnter Employee Details:\n";
            cout<<"Name: ";
            getline(cin,empName);
            cout<<"EMP ID: ";
            cin>>empId;
            getchar();
            cout<<"Address: ";
            getline(cin,empAddress);

        }
        void displayBasic()
        {
            cout<<"EMP ID : "<<empId<<endl;
            cout<<"NAME : "<<empName<<endl;
            cout<<"Address : "<<empAddress<<endl;
        }
};

class PermanentEmployee : public Employee
{
    private:
        double basicSalary;
        double hra;
        double da;
    public:
        double calculateSalary()
        {
            double netSalary=basicSalary+hra+da-800;
            return netSalary;
        }
        void inputPE()
        {
            cout<<"Basic Salary: ";
            cin>>basicSalary;
            cout<<"HRA: ";
            cin>>hra;
            cout<<"DA: ";
            cin>>da;   
        }
        void displayPE()
        {
            cout<<"Basic Salary: "<<basicSalary<<endl;
            cout<<"HRA: "<<hra<<endl;
            cout<<"DA: "<<da<<endl;

        }
};

class TemporaryEmployee : public Employee
{
    private:
        int noOfDays;
        double wagePerDay;
    public:
        double calculateSalary()
        {
            double netSalary=noOfDays*wagePerDay;
            return netSalary;
        }
        void inputTE()
        {
            cout<<"Number of Days: ";
            cin>>noOfDays;
            cout<<"Wage per Day: ";
            cin>>wagePerDay;
        }
        void displayTE()
        {
            cout<<"Number of Days: "<<noOfDays<<endl;
            cout<<"Wage per Day: "<<wagePerDay<<endl;

        }

};


int main()
{
    PermanentEmployee PE;
    TemporaryEmployee TE;
    int c;
    double sal;
    
    do
    {
        cout<<"\n\n1.Salary for PermanentEmployee"<<endl;
        cout<<"2.Salary for TemporaryEmployee"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter the choice:";
        cin>>c;
        getchar();

        switch (c)
        {
        case 1:
            PE.inputBasic();
            PE.inputPE();
            cout<<"\n\nYour Net Salary: "<<PE.calculateSalary()<<endl;
            system("pause");
            break;
        case 2:
            TE.inputBasic();
            TE.inputTE();
            cout<<"\n\nYour Net Salary: "<<TE.calculateSalary()<<endl;
            system("pause");
            break;
        case 3:
            break;
        default:
            cout<<"\n\nINVALID INPUT\n";
            system("pause");
            break;
        }


    }while(c!=3);
    
    
    
    return 0;

}