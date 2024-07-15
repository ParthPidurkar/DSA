// https://www.geeksforgeeks.org/batch/dsa-4/track/DSASP-Mathematics/problem/multiplication-under-modulo
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int multiplicationUnderModulo(long long a,long long b)
    {
        //your code here
        long long sum;
        sum = ((a%(long long)(pow(10,9)+7))*(b%(long long)(pow(10,9)+7)))%(long long)(pow(10,9)+7);
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    
	    //taking input a and b
	    cin>>a>>b;
	    Solution ob;
	    //calling multiplicationUnderModulo() function
	    cout<<ob.multiplicationUnderModulo(a,b)<<endl;
	}
	return 0;
}
// } Driver Code Ends