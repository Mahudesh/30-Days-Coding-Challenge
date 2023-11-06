Problem:

Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only.

Input:

class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int c=0;
        vector<int>arr;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                c++;
            }
            if(s[i]==' ' || (i+1)==s.length())
            {
                if(c>0)
                arr.push_back(c);
                c=0;
            }
        }
        return arr[arr.size()-1];
    }
};
