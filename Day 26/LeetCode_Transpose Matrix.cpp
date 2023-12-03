Problem:
Given a 2D integer array matrix, return the transpose of matrix.

The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

Input:
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix)
     {
                int m = matrix.size();
                int n = matrix[0].size(); 
   
             vector<vector<int>> transpose2(n, vector<int>(m));
             for(int i=0;i<m;i++)
             {
                 for(int j=0;j<n;j++)
                 {
                     transpose2[j][i]=(matrix[i][j]);
                 }
             }
             return transpose2;

    }
};
