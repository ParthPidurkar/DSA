
class Solution {
public:
    int hammingWeight(int n) {
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
};