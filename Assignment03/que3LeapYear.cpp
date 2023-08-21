#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year to find it is leap or not: ";
    cin>>year;

    if((year%4==0 && year%100!=0) || (year%400==0))
    {
        cout<<year<<" it is leap year\n";
    }
    else{
        cout<<"\n"<<year<<" it is not a leap year\n";
    }
    return 0;
}