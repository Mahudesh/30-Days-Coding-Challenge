Problem:

In Chefland, a football player gets 2 points for each goal and 1 point for each assist.Messi has A goals and B assists this season, whereas Ronaldo has X goals and Y assists.
Find out the player with more points this season.

Input:
#include <iostream>
using namespace std;

int main() 
{
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	int m=(a*2)+b;
	int r=(x*2)+y;
	if(m>r)
	cout<<"Messi";
	else if(m==r)
	cout<<"Equal";
	else
	cout<<"Ronaldo";
	return 0;
}

