#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter marks of student A ";
    cin>>a;
    cout<<"Enter marks of student B ";
    cin>>b;
    cout<<"Enter marks of student C ";
    cin>>c;
    if(a<b)
    {
        if (a<c)
        {
            cout<<"student A got least marks";
        }
        else{
            cout<<"student C got least marks";
        }
        
    }
    if(b<a)
    {
        if (b<c)
        {
            cout<<"student B got least marks";
        }
        else{
            cout<<"student C got least marks";
        }

    }
    return 0;
}