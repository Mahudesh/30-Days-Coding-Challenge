Problem:

Alice, Bob, and Charlie are contributing to buy a Netflix subscription. However, Netfix allows only two users to share a subscription.
Given that Alice, Bob, and Charlie have ,A,B, and C rupees respectively and a Netflix subscription costs X rupees, find whether any two of them can contribute to buy a subscription.

Input:

#include <iostream>
using namespace std;

int main() 
{
    int t,a,b,c,s;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>s;
        if(a+b>=s || b+c>=s || a+c>=s)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
	return 0;
}
