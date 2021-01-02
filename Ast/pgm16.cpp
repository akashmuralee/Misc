#include<iostream>
using namespace std;

int main()
{
    string itemName;
    double price,total=0;
    int qty,qtysum=0,n=0,dailyQty[5]={0};

    cout<<"Enter the name of the Item: ";
    getline(cin,itemName);
    
    cout<<"Enter the price of the item: ";
    cin>>price;
    cout<<"Enter the number of items for sale: ";
    cin>>qty;
    for (int i = 1; i<5 && qtysum<qty; i++)
    {
        cout<<"Enter the number of items sold on Day "<<i<<": ";
        cin>>dailyQty[i];
        qtysum=qtysum+dailyQty[i];
        n++;
    }
    
    cout<<"\n"<<itemName;
    cout<<"\nDay\tNo.of items_available\tPrice";
    int i;
    for ( i = 0; i < n; i++)
    {   
        qty=qty-dailyQty[i];
        cout<<"\nDay "<<i+1<<"\t"<<qty<<"\t"<<(int)price;
        total=total+dailyQty[i+1]*price;
        price=price*0.93;

    }

    cout<<"\n\nTotal amount of Sales = "<<(int)total;

}