#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter character ";
    cin>>ch;
    int y = (int)ch;
    if((y>=97 && y<=122) || (y>=65 || y<=90) )
    {
        if((ch=='a'|| ch=='e'||ch=='i'|| ch=='o' ||ch=='u') || (ch=='A'|| ch=='E'||ch=='I'|| ch=='O' ||ch=='U') )
        {
            cout<<"It is a vowel "<<ch<<endl;
        }
        else{
            cout<<"It is a consonant "<<ch<<endl;
        }
    }
    else
    {
        cout<<"It is not alphabet";
    }
    return 0;
}