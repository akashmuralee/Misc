#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int pop[100];
    char cont[30][100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>cont[i];
    }


    for (int i = 0; i < n; i++)
    {
        cin>>pop[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (pop[j]>pop[j+1])
            {
                int t1=pop[j];
                pop[j]=pop[j+1];
                pop[j+1]=t1;

                char t2[20];
                strcpy(t2,cont[j]);
                strcpy(cont[j],cont[j+1]);
                strcpy(cont[j+1],t2);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<pop[i]<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<cont[i]<<endl;
    }

    return 0;
}
