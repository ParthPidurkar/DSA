#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"\nEnter a character ";
    cin>>ch;
    int y = (int)ch;
    if((y>=97 && y<=122) ||(y>=65 && y<=90) )
    {
        cout<<ch<<" it is Alphabet "<<endl;
    }
    else if(y>=48 && y<=57)
    {
        cout<<ch<<" it is a Digit "<<endl;
    }
    else{
        cout<<ch<<" it is Special Character";
    }
    return 0;
}