Problem:

Chef has started working at the candy store. The store has 100 chocolates in total.Chef’s daily goal is to sell X chocolates. For each chocolate sold, he will get 1 rupee. However, if Chef exceeds his daily goal, he gets 
2 rupees per chocolate for each extra chocolate.If Chef sells Y chocolates in a day, find the total amount he made.

Input:

#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int g,s,ans=0;
        cin>>g>>s;
        if(s>g)
        {
        ans=(s-g)*2;
        cout<<ans+g<<"\n";
        }
        else
        cout<<s<<"\n";
        
    }
	return 0;
}
