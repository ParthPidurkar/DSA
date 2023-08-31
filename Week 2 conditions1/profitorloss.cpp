#include<iostream>
using namespace std;
int main()
{
    int profit, sellingprice , costprice;
    cout<<"Enter the Cost Price ";
    cin>>costprice;

    cout<<"Enter the Selling Price ";
    cin>>sellingprice;
    
    profit = sellingprice - costprice;

    if(profit > 0)
    {
        cout<<"\nProfit is rs "<<profit<<endl;
    }
    else if (profit < 0){
        cout<<"\nLoss of rs "<<-profit<<endl;
    }
    else{
        cout<<"\nThere is not Profit nor loss "<<endl;
    }
    return 0;
}