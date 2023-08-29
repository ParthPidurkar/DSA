#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the radius of circle : ";
    cin>>r;
    int area = 3.14*r*r;
    int circumference = 2*3.14*r;
    area>circumference?cout<<area<<" area is greater than circumference \n":cout<<circumference<<" circumference is greater than area\n";
}