#include<iostream>
using namespace std;
int main()
{
    int yr;
    int d;
    cout<<"Enter no test : ";
    cin>>d;
    while(d>0)
    {
        cout<<"Enter Year : ";
        cin>>yr;
        yr%4 == 0?yr%100 == 0?yr%400 == 0?cout<<"\n It is LEAP YEAR.\n":cout<<"\n It is NOT LEAP YEAR.\n":cout<<"\n It is LEAP YEAR.\n":cout<<"\n It is NOT LEAP YEAR.\n";
        d--;
    }
    return 0;
}