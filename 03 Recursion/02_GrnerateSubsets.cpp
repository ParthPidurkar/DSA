#include <iostream>
using namespace std;
int fun(string s , string curr ,int i)
{
    if(i==s.length())
    {
        cout<<curr<<endl;
        return 0;
    }
    fun(s,curr,i+1);
    fun(s,curr+s[i],i+1);
    return 0;
}
int main()
{
    fun("abc","",0);

    return 0;
}