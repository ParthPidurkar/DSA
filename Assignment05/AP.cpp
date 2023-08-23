#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter Number : ";
    cin>>n;
   for(i=4; n>0;n--)
    {
        cout<<i<<endl;
        i+=3;
    }
    
    return 0;
}