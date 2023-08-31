#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number \n";
    cin>>n;
    if(n<0)
    {
        n = -n;
    }
    cout<<"Absolute value is  "<<n<<endl;
    return 0;
}