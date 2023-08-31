#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    if(n % 5 == 0 && n % 3 == 0) 
    {
        cout<<"This number is divisible by 5 and 3\n";
    }
    else{
        cout<<"This number can not divisible by 5 and 3\n";
    }
    return 0;
}