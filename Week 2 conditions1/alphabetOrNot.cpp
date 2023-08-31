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
        cout<<"It is Alphabet "<<endl;
    }
    else{
        cout<<"It is not a Alphabet "<<endl;
    }
    return 0;
}