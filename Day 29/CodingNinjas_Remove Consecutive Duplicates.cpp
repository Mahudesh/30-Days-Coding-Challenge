Problem:
Remove Consecutive Duplicates From A String.

Input:
string removeDuplicate(string &s)
{
    char first=s[0];
    string result="";
    result+=first;
    for(int i=1;i<s.length();i++)
    {
        if(result.back()!=s[i])
        {
            result=result+s[i];
        }
    }
    return result;
}
