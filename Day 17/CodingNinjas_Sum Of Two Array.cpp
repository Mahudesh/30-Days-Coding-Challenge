Problem:
You are given two numbers A and B of two arrays and their sizes m and n, where each array represents
a digit. You need to find the sum of these two numbers and return the sum in the form of an array.

Input:

#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m)
 {
	 long long sum1=0,sum2=0;
	for(int i=0;i<n;i++)
	{
		sum1=(sum1*10)+a[i];
	}
	for(int i=0;i<m;i++)
	{
		sum2=(sum2*10)+b[i];
	}
	long long tot=sum1+sum2;
	vector<int>c;
	while(tot>0)
	{
		c.push_back(tot%10);
		tot=tot/10;
	}
	reverse(c.begin(),c.end());
	return c;
}
