Problem:

You are given an integer array of size n, sorted in non-descending order. You are also given an integer
target.
Your task is to write a function for target in the array. If it exists, return its index in 0-based
indexing. If target is not present in the array A, return -1;

Input:

int search(vector<int> &nums, int target) 
{
   for(int i=0;i<nums.size();i++)
   {
       if(nums[i]==target)
       {
           return i;
       }
   }
   return -1;
}
