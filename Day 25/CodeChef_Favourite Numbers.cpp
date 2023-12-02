Problem:
Favourite Numbers:

Input:
#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int a;
	    cin>>a;
	    if(a%2==0 && a%7==0)
	    cout<<"Alice"<<"\n";
	    else if(a%2!=0 && a%9==0)
	    cout<<"Bob"<<"\n";
	    else
	    cout<<"Charlie"<<"\n";
	}
	return 0;
}
