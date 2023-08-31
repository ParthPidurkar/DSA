#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st side of tringle ";
    cin>>a;
    cout<<"Enter 2nd side of tringle ";
    cin>>b;
    cout<<"Enter 3rd side of tringle ";
    cin>>c;
    if(((a+b)>c) && ((c+b)>a) && ((a+c)>b) )
    {
        cout<<a<<" "<<b<<" "<<c<<" are the side of tringles ";
    }
    else{
        cout<<a<<" "<<b<<" "<<c<<" are not the side of tringles ";
    }
    return 0;
}