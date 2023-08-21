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
    if (a == b && b == c)
    {
        cout << "Equilateral Triangle";
    }
    else if (a == b || b == c || c == a)
    {
       cout << "Isosceles Triangle";
    }
    else
    {
        cout << "Scalene Triangle"; 
    }
    return 0;
}