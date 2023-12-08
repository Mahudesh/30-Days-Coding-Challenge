Problem:
Given a binary array nums, return the maximum number of consecutive 1's in the array.

Input:

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
     {
         int c=0;
         int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            c++;
            else
            c=0;
            maxi=max(maxi,c);
        }
        return maxi;
    }
};
