Problem: Given an array 'arr' with 'n' elements, that task is to rotate the array to the left by 'k' steps,
  where 'k' is non-negative.

Input:

vector<int> rotateArray(vector<int>arr, int k)
 {
     vector<int> temp;
     int d=0;
    for(int i=k;i<arr.size();i++)
    {
        temp.push_back(arr[i]);

        //d++;
    }
    for(int i=0;i<k;i++)
    {
        temp.push_back(arr[i]);
    }
    return temp;
}
