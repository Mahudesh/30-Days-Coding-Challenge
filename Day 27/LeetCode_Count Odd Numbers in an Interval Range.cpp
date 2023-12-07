Problem:
Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive).

Input:
class Solution {
public:
    int countOdds(int low, int high) 
    {
        int c=0;
        if(low%2!=0 && high%2!=0)
        {
            if(low==high)
            return 1;
             c=2;
            return (((high-low)-1)/2)+c;
        }
        else if(low %2==0 && high%2==0)
        {
            return ((high-low))/2;
        }
        else
        {
            return((high-low)/2)+1;
        }
    }
};
