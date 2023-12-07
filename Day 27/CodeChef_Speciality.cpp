Problem:
On every CodeChef user's profile page, the list of problems that they have set, tested, and written editorials for, is listed at the bottom.
Given the number of problems in each of these 3 categories as ,,X,Y, and Z respectively (where all three integers are distinct), find if the user has been most active as a Setter, Tester, or Editorialist.

Input:

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int s,t,w;
	    cin>>s>>t>>w;
	    if(s>t && s>w)
	    cout<<"Setter"<<"\n";
	    else if(t>w)
	    cout<<"Tester"<<"\n";
	    else
	    cout<<"Editorialist"<<"\n";
	}
	return 0;
}
