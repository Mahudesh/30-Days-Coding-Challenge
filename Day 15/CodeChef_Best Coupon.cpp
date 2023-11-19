Problem:
Chef is ordering food online (instead of cooking) and the bill comes out to be Rs. X. Chef can use one of the following two coupons to avail a discount.Get 10 percent off on the bill amount
Get a flat discount of Rs. 100 on the bill amount.
What is the maximum discount Chef can avail?

Input:

#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int amt;
        cin>>amt;
        if(((amt/100)*10)>100)
        cout<<(amt/100)*10<<"\n";
        else
        cout<<"100"<<"\n";
    }
	return 0;
}
