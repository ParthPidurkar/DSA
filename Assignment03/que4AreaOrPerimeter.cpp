#include<iostream>
using namespace std;
int main()
{
    int length, breadth ;
    cout<<"Enter the length ";
    cin>>length;
    cout<<"Enter the breadth ";
    cin>>breadth;
    int perimeter = 2 * (length+breadth);
    cout << "perimeter = "<<perimeter<<endl;
    int area =length*breadth;
    cout << "area = "<<area<<endl;
    if(area > perimeter)
    {
        cout<<area<<" area of this circle is larger than the perimeter\n";
    }
    else{
        cout<<perimeter<<" perimeter of this circle is larger than the area\n";
    }
    return 0;
}