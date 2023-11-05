Problem :
Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.

Input:

class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        int f=0,k=0;
        while(f==0)
        {
            long int ans=pow(4,k);
            if(ans>n)
            break;
            if(ans==n)
            {
                return true;
            
            }
            else
            {
                k++;
            }
        }
        return false;

    }
};
