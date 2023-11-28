Problem:
The newspaper in Chefland consists of 10 pages numbered 1 to 10.The last 3 pages of the newspaper are always dedicated to the sports section.
Given a random page number X, determine whether that page is dedicated to the sports section.

Input:
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	if(t>=8 && t<=10)
	cout<<"YES"<<"\n";
	else
	cout<<"NO"<<"\n";
	return 0;
}
