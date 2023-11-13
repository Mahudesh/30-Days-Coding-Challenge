Problem:
For a given two-dimensional integer array/list 'ARR' of size (NxM), print the 'ARR' in a sine wave
order, like print the first column top to bottom, next column bottom to top, and so on.

Input:

#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> result;
    int left=0;
    while(left<=mCols-1)
    {
    for(int i=0;i<nRows;i++)
    {
        result.push_back(arr[i][left]);
    }
    left++;
    if(left<=mCols-1)
    {
    for(int i=nRows-1;i>=0;i--)
    {
        result.push_back(arr[i][left]);
    }
    left++;
    }
    }
    return result;

}
