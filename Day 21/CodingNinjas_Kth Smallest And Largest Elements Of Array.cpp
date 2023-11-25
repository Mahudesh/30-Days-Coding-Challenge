Problem:
You are given an array of n distinct integers and a positive integer K. Find the Kth smallest and largest
element of the array. It is guaranteed that K is not greater than the size of the array.

Input:
#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	sort(arr.begin(),arr.end());
	// int min=arr[k-1];
	// int max=arr[arr.size()-k];
	// vector<int>ans;
	// ans.push_back(min);
	// ans.push_back(max);
	return {arr[k-1],arr[arr.size()-k]};
}
