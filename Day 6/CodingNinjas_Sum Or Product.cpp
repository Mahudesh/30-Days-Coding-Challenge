Problem:
Given an array of size N. Your task is to find out the sum of maximum and minimum elements in the array.

Input:

#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n)
{
	int min=arr[0];
	int max=arr[0];
	for(int i=1;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	return min+max;
}

  
