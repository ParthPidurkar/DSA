#include <iostream>

int main()
{
    int n=10;
    int rem = n%4;
    if(rem==0)
    {
        std::cout<<n;
    }
    else if(rem==1)
    {
        std::cout<<1;
    }
    else if(rem==2)
    {
        std::cout<<n+1;
    }
    else
    {
        std::cout<<0;
    }

    return 0;
}