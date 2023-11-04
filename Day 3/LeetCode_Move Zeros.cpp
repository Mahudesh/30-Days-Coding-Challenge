Problem:
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Input:

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        vector<int>arr;
        int n=nums.size(),c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                c++;
            nums.push_back(nums[i]);
            }
        }
        int t=n-c;
        for(int i=1;i<=t;i++)
        {
            nums.push_back(0);
        }
       // for(auto v:nums)
       // cout<<v<<" ";
       nums.erase(nums.begin()+0,nums.begin()+n);
    }
};
