Problem:
Akshat has X rupees to spend in the current month. His daily expenditure is Y rupees, i.e., he spends Y rupees each day.
Given that the current month has 30 days, find out if Akshat has enough money to meet his daily expenditures for this month.

Input:
#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    int c=30*b;
	    if(c<=a)
	    cout<<"YES"<<"\n";
	    else
	    cout<<"NO"<<"\n";
	    
	}
	return 0;
}
