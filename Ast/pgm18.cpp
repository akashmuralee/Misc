#include<iostream>
using namespace std;

int q[100];
int front=-1;
int rear=-1;
int n;

void dispQ()
{

    for (int i = front; i <=rear; i++)
    {
        cout<<q[i]<<" ";
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
    int e=0; //used to exit MENU
    int c; // Choice variable used in switch
    int num; // number to be inserted to queue
    int size;
    n=5;
    cout<<"Enter the size of the score card: ";
    cin>>size;
    if (size>0&&size<=100)
    {

        for (int  i = 0; i < size; i++)
        {
            cout<<"Enter the hurdle race score "<<i+1<<": ";
            cin>>num;
            if (i>4)
            {
                del();
            }
            insert(num);
        }

        cout<<"\nLast Hurdle Race Scores are: ";
        dispQ();
        
    }
    else
    {
        cout<<"\nInvalid score card size\n";
    }
    
    return 0;
}