Problem:
Chef's coding class is very famous in Chefland.This year X students joined his class and each student will require one chair to sit on. Chef already has 
Y chairs in his class. Determine the minimum number of new chairs Chef must buy so that every student is able to get one chair to sit on.

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
        if((a-b)<0)
        cout<<"0"<<"\n";
        else
        cout<<a-b<<"\n";
    }
	return 0;
}
