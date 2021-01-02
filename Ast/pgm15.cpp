#include<iostream>
using namespace std;

int q[100];
int front=-1;
int rear=-1;
int n;

void dispQ()
{
    cout<<"\n";
    
    if (front==-1)
    {
        cout<<"0 users to serve";
    }
    else
    {
        for (int i = front; i <=rear; i++)
        {
            cout<<q[i]<<" ";
        }
    }

    cout<<"\n\n";
    
}

void insert( int num)
{
    if ((rear-front)==n-1)
    {
        cout<<"QUEUE IS FULL !!";
        cout<<"\n\n";
        system("pause");
    }
    else if (rear==-1)
    {
        front=0;
        rear=0;
        q[rear]=num;

    }
    else
    {
        q[++rear]=num;

    }
}

void del()
{   
    if (front==-1)
    {
        cout<<"QUEUE EMPTY !";
        cout<<"\n\n";
        system("pause");
    }

    else if (front==rear)
    {
        front=-1;
        rear=-1;
        
    }
    else
    {
        front++;
        
    }
}



int main()
{   
    
    int num,servedUsers;

    cout<<"Enter the number of users: ";
    cin>>n;
    if(n>0)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<"Enter the credit points for user "<<i+1<<": ";
            cin>>num;
            insert(num);
        }

        cout<<"Enter the number of users to serve: ";
        cin>>servedUsers;
        if (servedUsers>num||servedUsers<0)
        {
            cout<<"Invalid Number of Users";
        }
        else
        {
            for ( int i = 0; i < servedUsers; i++)
            {
                del();
            }
            
            cout<<"\n\nThe unserved users are:\n";
            dispQ();
        }

    }
    else
    {
        cout<<"Invalid Number of Users";
    }

}