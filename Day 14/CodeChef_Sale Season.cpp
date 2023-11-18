Problem:
It's the sale season again and Chef bought items worth a total of X rupees. The sale season offer is as follows:if ≤100X≤100, no discount.if 100<≤1000100<X≤1000, discount is 25 rupees.if 1000<≤50001000<X≤5000, discount is 100 rupees.
if 5000<X>5000, discount is 500 rupees.Find the final amount Chef needs to pay for his shopping.

Input:
#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x;
        cin>>x;
        if(x<=100)
        cout<<x<<"\n";
        else if(x>100 && x<=1000)
        cout<<x-25<<"\n";
        else if(x>1000 && x<=5000)
        cout<<x-100<<"\n";
        else
        cout<<x-500<<"\n";
    }
	return 0;
}
