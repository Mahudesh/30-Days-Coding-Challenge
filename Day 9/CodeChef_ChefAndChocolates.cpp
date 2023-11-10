Problem:
Chef has X 5 rupee coins and Y 10 rupee coins. Chef goes to a shop to buy chocolates for Chefina where each chocolate costs 
Z rupees. Find the maximum number of chocolates that Chef can buy for Chefina.

Input:

#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int five,ten,cost;
        cin>>five>>ten>>cost;
        int a=five*5;
        int b=ten*10;
        cout<<(a+b)/cost<<"\n";
        
    }
	return 0;
}
