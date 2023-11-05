Problem:
You are given anumber N and Query Q. If Q is 1 return sum of all integers from 1 to N. If Q is 2 return the product of all integers from 1 to N. Since the product
can be very large return it modulo 10^9+7.

Input:
#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
	long long sum=0;
	long long mul=1;
	if(q==1)
	{
		for(int i=1;i<=n;i++)
		{
			sum+=i;
		}
		return sum;
	}
	else if(q==2)
	{
		for(int i=1;i<=n;i++)
		{
			mul*=i;
			mul%=1000000007;
		}
		return mul;
	}
}
