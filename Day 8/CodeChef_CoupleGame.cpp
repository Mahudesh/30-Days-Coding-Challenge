Problem:
There are G girl and B boy students at IIT (BHU) such that >B>G.
If ICM were a team game where teams could only be of size 2, having exactly 1 girl student and 1 boy student, what would be the minimum number of boy students from IIT (BHU) who would not be able to participate?

Input:

#include <iostream>
using namespace std;

int main() 
{
    int b,g,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    cin>>g>>b;
    b=b-g;
    cout<<b<<"\n";
    }
	return 0;
}
