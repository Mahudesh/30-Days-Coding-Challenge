Problem:
You are given a stack consisting of N integers. Your task is to sort this stack in descending order.
We can only use the following functions on this stack S.

Input:

#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{
		vector<int>temp;
		while(!stack.empty())
		{
			temp.push_back(stack.top());
			stack.pop();
		}

		sort(temp.begin(),temp.end(),greater<int>());
		for(auto v:temp)
		cout<<v<<" ";
}
