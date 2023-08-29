#include<iostream>
using namespace std;
int main()
{
    int le,br;
    int d;
    cout<<"Enter no test : ";
    cin>>d;
    while(d>0)
    {
        cout<<"Enter length of rectangle : ";
        cin>>le;
        cout<<"Enter breadth of rectangle : ";
        cin>>br;
        int area = le*br;
        int perimeter = 2*le*br;
        area>perimeter?cout<<area<<" area is greater than perimeter \n":cout<<perimeter<<" perimeter is greater than area\n";
        d--;
    }
    return 0;
}