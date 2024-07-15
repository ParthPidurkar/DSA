// https://www.geeksforgeeks.org/batch/dsa-4/track/DSASP-Mathematics/problem/addition-under-modulo
// Modular arithmetic is the branch of arithmetic mathematics related with the "mod" functionality. Basically, modular arithmetic is related with computation of "mod" of expressions. Expressions may have digits and computational symbols of addition, subtraction, multiplication, division or any other. Here we will discuss briefly about all modular arithmetic operations.

// Quotient Remainder Theorem:
// It states that, for any pair of integers a and b (b is positive), there exist two unique integers q and r such that:

// a = b x q + r where 0 <= r < b

// Example:

// If a = 20, b = 6 then q = 3, r = 2, 20 = 6 x 3 + 2
// Modular Addition:
// Rule for modular addition is:

// (a + b) mod m = ((a mod m) + (b mod m)) mod m

// Example:

// (15 + 17) % 7= ((15 % 7) + (17 % 7)) % 7= (1 + 3) % 7= 4 % 7= 4
// The same rule is to modular subtraction. We don't require much modular subtraction but it can also be done in the same way.

// Modular Multiplication:
// The Rule for modular multiplication is:

// (a x b) mod m = ((a mod m) x (b mod m)) mod m

// Example:

// (12 x 13) % 5= ((12 % 5) x (13 % 5)) % 5= (2 x 3) % 5= 6 % 5= 1
// Modular Division:
// The modular division is totally different from modular addition, subtraction and multiplication. It also does not exist always.

// (a / b) mod m is not equal to ((a mod m) / (b mod m)) mod m.
// This is calculated using the following formula:

// (a / b) mod m = (a x (inverse of b if exists)) mod m

// Modular Inverse:
// The modular inverse of a mod m exists only if a and m are relatively prime i.e. gcd(a, m) = 1. Hence, for finding the inverse of an under modulo m, if (a x b) mod m = 1 then b is the modular inverse of a.

// Example:

// a = 5, m = 7 (5 x 3) % 7 = 1 hence, 3 is modulo inverse of 5 under 7.
// Modular Exponentiation:
// Finding a^b mod m is the modular exponentiation. There are two approaches for this - recursive and iterative.

// Example:

// a = 5, b = 2, m = (5 ^ 2) % 7 = 25 % 7 = 4
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {
        // code here
        long long sum;
        sum = ((a%(long long)(pow(10,9)+7))+(b%(long long)(pow(10,9)+7)))%(long long)(pow(10,9)+7);
        return sum ;
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    Solution ob;
	    cout<<ob.sumUnderModulo(a,b)<<endl;
	}
	return 0;
}
// } Driver Code Ends