Problem:
In a classic chase, Tom is running after Jerry as Jerry has eaten Tom's favourite food.Jerry is running at a speed of X metres per second while Tom is chasing him at a speed of 
Y metres per second. Determine whether Tom will be able to catch Jerry.
Note that initially Jerry is not at the same position as Tom.

Input:

#include <iostream>
using namespace std;

int main() 
{
	int t,l,r;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    cin>>l>>r;
	    if(l>=r)
	    cout<<"NO"<<"\n";
	    else
	    cout<<"YES"<<"\n";
	}
	
	return 0;
}
