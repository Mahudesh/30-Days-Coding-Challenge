Problem:
You are given a 0-indexed integer array nums and a target element target.

A target index is an index i such that nums[i] == target.

Return a list of the target indices of nums after sorting nums in non-decreasing order. If there are no target indices, return an empty list. The returned list must be sorted in increasing order.

Input:

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
        vector<int>result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                result.push_back(i);
            }
            if(nums[i]>target)
            break;
        }
        return result;
    }


};
