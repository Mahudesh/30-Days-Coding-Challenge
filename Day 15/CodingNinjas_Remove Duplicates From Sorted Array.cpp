Problem:
You are given a sorted integer array 'arr' of size 'n'.

You need to remove the duplicates from the array such that each element appears only once.

Returns the length of this new array.

Input:

#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n)
 {
	 int c=0;
	 for(int i=0;i<n-1;i++)
	 {
		 if(arr[i]==arr[i+1])
	    c++;
	 }
	 return arr.size()-c;
}
