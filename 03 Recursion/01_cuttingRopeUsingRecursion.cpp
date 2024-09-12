#include <iostream>
using namespace std;
int fun(int n,int a, int b, int c)
{
    if(n==0)
    {
        return 0;
    }
     if(n<=-1)
    {
        return -1;
    }
    int r = max(fun(n-a,a,b,c),
            max(fun(n-b,a,b,c),
            fun(n-c,a,b,c)));
    if(r==-1)
    {
        return -1;
    }
    else{
        return r+1;
    }
    return 0;
}
int main()
{
    int x=0;
    x=fun(17,10,11,3);
    cout<<x;

    return 0;
}