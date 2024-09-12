/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum =0;
int fun(int n)
{
    // printf("%d",n);
    sum = sum + n;
    n--;
    if(n>0)
    {
      fun(n);  
    }
    return sum;
}
int main()
{
    int n,res;
    printf("Enter :- ");
    scanf("%d",&n);
    res = fun(n);
    printf("%d",res);
    return 0;
}
