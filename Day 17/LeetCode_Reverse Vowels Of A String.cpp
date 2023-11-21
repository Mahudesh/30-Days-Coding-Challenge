Problem:
Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

Input:
class Solution {
public:
    bool vowel(string s, int i, int n)
    {
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U' || s[i]=='i' || s[i]=='I')
        return true;
        return false;
    }
    string reverseVowels(string s) 
    {
        string temp="";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
           if(vowel(s,i,n))
           {
               temp=temp+s[i];
           }
        }
        reverse(temp.begin(),temp.end());
                int k=0;
        for(int i=0;i<n;i++)
        {
            if(vowel(s,i,n))
            {
                s[i]=temp[k];
                k++;
            }
        }
        return s;
    }
};
