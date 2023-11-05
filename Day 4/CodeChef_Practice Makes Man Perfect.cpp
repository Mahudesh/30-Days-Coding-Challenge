Problem:
Most programmers will tell you that one of the ways to improve your performance in competitive programming is to practice a lot of problems.Our Chef took the above advice very seriously and decided to set a target for himself.Chef decides to solve at least 1010 problems every week for 4 weeks.
Given the number of problems he actually solved in each week over 4 weeks as 2,3,P 1 ,P 2 ,P 3 , and 4P 4, output the number of weeks in which Chef met his target.

Input:

#include <iostream>
#include<vector>
using namespace std;

int main() 
{
    int n;
	vector<int>arr;
	while(cin>>n)
	{
	    arr.push_back(n);
	}
	int c=0;
	for(int i=0;i<arr.size();i++)
	{
	    if(arr[i]>=10)
	    {
	        c++;
	    }
	}
	cout<<c;
	return 0;
}
