Problem:
Each pizza consists of 4 slices. There are N friends and each friend needs exactly X slices.
Find the minimum number of pizzas they should order to satisfy their appetite.

Input:

#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int req=n*x;
        int c=0;
        while(req>0)
        {
            req=req-4;
            c++;
        }
        cout<<c<<"\n";
    }
	return 0;
}
