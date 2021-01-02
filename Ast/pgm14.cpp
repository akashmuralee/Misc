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
        cout<<"No more tickets to be served";
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
        cout<<q[front]<<" ";
        front=-1;
        rear=-1;
        
    }
    else
    {
        cout<<q[front]<<" ";
        front++;
        
    }
}



int main()
{   
    
    int servedTickets;

    cout<<"Enter the number of customer takes the tickets: ";
    cin>>n;
    if(n>0)
    {
        for (int i = 0; i < n; i++)
        {
            insert(i+1);
        }
        cout<<"The tickets in the system are:\n";
        dispQ();

        cout<<"Enter the number of tickets served: ";
        cin>>servedTickets;

        cout<<"The served tickets are:\n";
        for ( int i = 0; i < servedTickets; i++)
        {
            del();
        }
        
        cout<<"\n\nThe unserved tickets are:\n";
        dispQ();
    }
    else
    {
        cout<<"Invalid Number";
    }
    
    

}