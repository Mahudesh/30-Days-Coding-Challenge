Problem:
Maximum Frequency Number

Input:
int maximumFrequency(vector<int> &arr, int n)
{
    int max=0;
    int ind=0;
    int c=0;
    for(int i=0;i<arr.size()-1;i++)
    {
        c=0;
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
            if(max<c)
            {
                max=c;
                ind=i;
            }
        }
    }
    return arr[ind];
}
