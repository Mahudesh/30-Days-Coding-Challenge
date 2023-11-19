Problem:
Write a program to solve a Sudoku puzzle by filling the empty cells.

A sudoku solution must satisfy all of the following rules:

Each of the digits 1-9 must occur exactly once in each row.
Each of the digits 1-9 must occur exactly once in each column.
Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
The '.' character indicates empty cells.

Input:

class Solution {
public:
bool isSafe(int row,int col,char ch,vector<vector<char>> &board)
{
    for(int i=0;i<9;i++)
    {
        if(board[i][col]==ch)
        return false;
    }
    for(int i=0;i<9;i++)
    {
        if(board[row][i]==ch)
        return false;
    }
    int newrow=row-(row%3);
    int newcol=col-(col%3);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(board[newrow+i][newcol+j]==ch)
            return false;
        }
    }
    return true;
}
bool findsol(int row,int col, vector<vector<char>> &board)
{
    if(row==8 && col==9)
    return true;
    if(col==9)
    {
        row++;
        col=0;
    }
    if(board[row][col]!='.')
    return findsol(row,col+1,board);
    for(char i='1';i<='9';i++)
    {
        if(isSafe(row,col,i,board))
        {
            board[row][col]=i;
            if(findsol(row,col+1,board))
            return true;
            board[row][col]='.';
        }
    }
    return false;
}
    void solveSudoku(vector<vector<char>>& board)
     {
         int row=0;
         int col=0;
       if( findsol(row,col,board))
       cout<<"";
     
    }
};
