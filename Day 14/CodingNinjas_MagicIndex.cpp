Problem:

You are given a sorted array A consisting of N integers. Your task is to find the magic index
in the given array.

A magic index in an array A[0,,N-1] is defined to be an index i such that A[i]=i.

Input:

#include <bits/stdc++.h> 
int magicIndex(vector<int> a, int n)
 {
	for(int i=0;i<n;i++)
	{
		if(a[i]==i)
		return i;
	}
	return -1;
}
