Problem:
There is a cricket match in Chefland. Chef's team requires N runs to win in M overs.Given that 1 over consists of 6 balls and a player can score a maximum of 6 runs in a ball, find whether Chef's team can win.

Input:
#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(b*6*6 >=a)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
	return 0;
}
