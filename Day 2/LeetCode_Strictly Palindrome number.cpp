Problem:
An integer n is strictly palindromic if, for every base b between 2 and n - 2 (inclusive), the string representation of the integer n in base b is palindromic.

Given an integer n, return true if n is strictly palindromic and false otherwise.

A string is palindromic if it reads the same forward and backward.

Input:

class Solution {
public:
bool palindrome(string str)
{
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
        return false;
    }
    return true;
}
bool base(int n,int m)
{
  long  int sum=0;
    while(n>0)
    {
        int r=n%m;
        sum=(sum*10)+r;
        n=n/10;

    }
    string str=to_string(sum);
   if( palindrome(str))
   return true;
   else
   return false;

}
    bool isStrictlyPalindromic(int n) 
    {
        int c=0;
        int r=(n-2)-2;
        for(int i=2;i<=n-2;i++)
        {
           if( base(n,i))
           c++;

           
        }
        if(c+1 == r)
        return true;
        else
        return false;
    }
};
