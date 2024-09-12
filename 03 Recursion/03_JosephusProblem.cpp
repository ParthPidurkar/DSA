#include <iostream>
using namespace std;
int JosephusProblem(int n, int k)
{
    if(n==1)
    {
        return 0;
    }
    return (JosephusProblem (n-1,k) +k ) %n;
    
}
int main()
{
    int result = JosephusProblem(5,2);
    cout<< result;

    return 0;
}