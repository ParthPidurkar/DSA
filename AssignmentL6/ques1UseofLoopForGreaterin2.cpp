#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int d;
    cout<<"Enter no test : ";
    cin>>d;
    while(d>0)
    {
        cout<<"Enter value of a and b : ";
        cin>>a>>b;
        a>b?cout<<a<<" A is greatest\n":cout<<b<<" B is greatest\n";
        d--;
    }
    return 0;
}