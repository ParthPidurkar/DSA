// https://leetcode.com/problems/counting-bits/
class Solution {
public:
    int bin(int n)
    {
        int i=0;
        int count=0;
        while(n>0)
        {
             if(n%2==1)
            {
                count++;
            }
            n=n/2;
            i++;
           
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> vect;
        for(int i=0;i<=n;i++)
        {
             vect.push_back(bin(i));
        }
       
        return vect;
    }
};