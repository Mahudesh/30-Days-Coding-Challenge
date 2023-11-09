Problem:
You are given an array ARR and length N and an integer target. Your task is to return all pairs of elements
such that they add up to Target.

Input:

#include<bits/stdc++.h>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	vector<pair<int,int>> nums;
    sort(arr.begin(),arr.end());
	int st=0,f=0;
	int end=n-1;
	while(st<end)
	{
		pair<int,int>p;
		if(arr[st]+arr[end]==target)
		{
		//nums.push_back({st,end});
		p.first=arr[st];
		p.second=arr[end];
		nums.push_back(p);
		st++;
		end--;
		f=1;
		}
		else if(arr[st]+arr[end]<target)
		st++;
		else if(arr[st]+arr[end]>target)
		end--;
	}
	if(f==0)
	nums.push_back({-1,-1});
	return nums;
}
 //1 1 1 1 2 2 2
