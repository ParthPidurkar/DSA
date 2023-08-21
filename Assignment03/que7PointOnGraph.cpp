#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the co-ordinates of point: ";
    cin>>x>>y;
    if(x == 0 && y !=0)
    {
        cout<<"Points "<<x<<" "<<y<<" lies on y-axis";
    }
    else if (x !=0 && y == 0)
    {
        cout<<"Points "<<x<<" "<<y<<" lies on x-axis";
    }
    else if (x == 0 && y == 0)
    {
        cout<<"Points "<<x<<" "<<y<<" lies on origin";
    }
    else{
        cout<<"Points "<<x<<" "<<y<<" neither lie on x-axis nor on y-axis";
    }
    return 0;
}