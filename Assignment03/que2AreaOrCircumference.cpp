#include<iostream>
using namespace std;
int main()
{
    int r ;
    cout<<"Enter the Radius ";
    cin>>r;
    int circumference = 2 * 3.14 * r;
    cout << "circumference = "<<circumference<<endl;
    int area =3.14*r*r;
    cout << "area = "<<area<<endl;
    if(area > circumference)
    {
        cout<<area<<" area of this circle is larger than the circumference\n";
    }
    else{
        cout<<circumference<<" circumference of this circle is larger than the area\n";
    }
    return 0;
}