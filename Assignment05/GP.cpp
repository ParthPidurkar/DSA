#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter Number : ";
    cin>>n;
   for(i=3; n>0;n--)
    {
        cout<<i<<endl;
        i*=4;
    }
    
    return 0;
}