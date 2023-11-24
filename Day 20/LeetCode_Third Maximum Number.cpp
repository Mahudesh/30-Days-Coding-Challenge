Problem:
Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.

Input:

class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        set<int>myset;
        for(int i=0;i<nums.size();i++)
        {
            myset.insert({nums[i]});
        }
        vector<int>temp(myset.begin(),myset.end());
        if(temp.size()<3)
        return temp[temp.size()-1];
        else
        return temp[temp.size()-1-1-1];
        

    }
};
