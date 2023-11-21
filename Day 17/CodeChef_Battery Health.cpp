Problem:
Apple considers any iPhone with a battery health of 80%80% or above, to be in optimal condition.
Given that your iPhone has %X% battery health, find whether it is in optimal condition.

Input:
#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int battery;
	    cin>>battery;
	    if(battery>=80)
	    cout<<"YES"<<"\n";
	    else
	    cout<<"NO"<<"\n";
	}
	return 0;
}
