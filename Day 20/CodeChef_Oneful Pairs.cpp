Problem:
Chef defines a pair of positive integers (a,b) to be a Oneful Pair, ifa+b+(a⋅b)=111.
Given two positive integers a and b, output Yes if they are a Oneful Pair. And No otherwise.

Input:
#include <iostream>
using namespace std;

int main() 
{
    
        int a,b;
        cin>>a>>b;
        if(a+b+(a*b)==111)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    
	return 0;
}
