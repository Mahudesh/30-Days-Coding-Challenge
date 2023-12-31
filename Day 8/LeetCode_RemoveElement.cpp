Problem:
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.

Input:

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        vector<int>temp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                temp.push_back(nums[i]);
            }
        }
         nums.clear();
         for(int i=0;i<temp.size();i++)
         {
             nums.push_back(temp[i]);
         }
         return nums.size();
    }
};
