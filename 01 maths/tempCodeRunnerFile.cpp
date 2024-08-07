// https://www.geeksforgeeks.org/batch/dsa-4/track/DSASP-Mathematics/problem/gp-term

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        //Complete this function
    double termOfGP(int a,int b,int n)
    {
        //Your code here
        double r=0,q=0;
        if(n==1)
            return a;
        if(n==2)
            return b;
        else
        {
            
            r=(1.0*b)/a;
            q=a*(pow(r,n-1));
            return q;
        }

    }
};

//{ Driver Code Starts.


int main()
{
    int T; //testcases total
    cin>>T;//input the testcases

    for(int i=0;i<T;i++) //white testcases are not exhausted
    {
        int A,B;
        cin>>A>>B; //input first and second term of gp
        int N;
        cin>>N; //input n
        Solution ob;
        cout<<floor(ob.termOfGP(A,B,N))<<endl;
    }

    return 0;
}


// } Driver Code Ends