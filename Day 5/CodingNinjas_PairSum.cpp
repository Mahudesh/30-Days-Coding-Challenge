Problem :
You are given an integer array of size n and integer s. Your task is to find the list of all pairs
of elements such that each sum of elements each pair equal s.

Input:

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
   vector<vector<int>>ar;
   //vector<int>temp;
   for(int i=0;i<arr.size()-1;i++)
   {
      for(int j=i+1;j<arr.size();j++)
      {
         if(arr[i]+arr[j]==s)
         {
          
            int a=min(arr[i],arr[j]);
          
            int b=max(arr[i],arr[j]);
            vector<int> pair={a,b};
            ar.push_back(pair);
         }
      }
   }
   sort(ar.begin(),ar.end());
   return ar;
}
