Problem: Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

Input:

class Solution {
public:
void func(int i,int j,vector<vector<int>>&matrix)
{
    for(int c=0;c<matrix[i].size();c++)
    {
        if(matrix[i][c]!=0)
        matrix[i][c]=-999;
    }
    for(int r=0;r<matrix.size();r++)
    {
        if(matrix[r][j]!=0)
        matrix[r][j]=-999;
    }
}
    void setZeroes(vector<vector<int>>& matrix) 
    {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    func(i,j,matrix);
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==-999)
                matrix[i][j]=0;
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
};
