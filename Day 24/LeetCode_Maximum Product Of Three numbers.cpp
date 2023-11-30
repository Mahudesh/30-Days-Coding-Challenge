Problem:
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

Input:
class Solution {
public:
    int maximumProduct(vector<int>& nums)
     {
         int maxi=INT_MIN;
        sort(nums.begin(),nums.end());
        maxi=max(nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3],nums[nums.size()-1]*nums[0]*nums[1]);
        return maxi;
    }
};
