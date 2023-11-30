Problem:
Rotate the given array left by one.

Input:
#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n)
 {
    vector<int>a(n);
    int k=0;
    for(int i=1;i<arr.size();i++)
    {
        a[k]=arr[i];
        k++;
    }
    a[a.size()-1]=arr[0];
    return a;
}
