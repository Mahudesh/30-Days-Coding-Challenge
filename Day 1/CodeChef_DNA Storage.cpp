Problem:
For encoding an even-length binary string into a sequence of A, T, C, and G, we iterate from left to right and replace the characters as follows:

00 is replaced with A
01 is replaced with T
10 is replaced with C
11 is replaced with G
Given a binary string 
S of length 
N (N is even), find the encoded sequence.

Input:

#include <iostream>
using namespace std;

int main() 
{
    int t,len,f=0;
    cin>>t;
    int lenn[t];
    string temp="",str,result="";
    for(int i=0;i<t;i++)
    {
        cin>>len;
        lenn[i]=len;
        cin>>str;
        for(int j=0;j<len;j++)
        {
            temp=temp+str[j];
            if(temp=="00")
            {
               result+="A";
                f=1;
            }
           else if(temp=="11")
            {
                result+="G";
                f=1;
            }
           else if(temp=="01")
            {
                result+="T";
                f=1;
            }
           else if(temp=="10")
            {
                result+="C";
                f=1;
            }
            if(f==1)
            {
                temp="";
                f=0;
            }
        }
    }
    int tempp=0,c=0;
    for(int i=0;i<t;i++)
    {
        int tempp=lenn[i]/2;
        for(int j=0+c;j<tempp+c;j++)
        {
            cout<<result[j];
            
        }
        cout<<"\n";
        c+=tempp;
    }
	return 0;
}
