Problem:
Some time ago, Chef bought X stocks at the cost of Rs. Y each. Today, Chef is going to sell all these X stocks at Rs. Z each. What is Chef's total profit after he sells them?
Chef's profit equals the total amount he received by selling the stocks, minus the total amount he spent buying them.

Input:
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int stock,cost,sell;
        cin>>stock>>cost>>sell;
        int investment=stock*cost;
        int sold=stock*sell;
        cout<<sold-investment<<"\n";
    }
	return 0;
}
