Problem:
Chef has his lunch only between 1 pm and 4 pm (both inclusive).Given that the current time is X pm, find out whether it is lunchtime for Chef.

Input:
#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int time;
	    cin>>time;
	    if(time>=1 && time<=4)
	    cout<<"YES"<<"\n";
	    else
	    cout<<"NO"<<"\n";
	    
	}
	return 0;
}
