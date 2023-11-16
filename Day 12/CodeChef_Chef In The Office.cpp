Problem:
Recently Chef joined a new company. In this company, the employees have to work for X hours each day
from Monday to Thursday. Also in this company,Friday is called Chill Day-employees only have to work
for Y hours(Y<X) on Friday. Saturday and Sundays areholidays.
Determine the total number of working hours in one week.

Input:
#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x,y;
        cin>>x>>y;
        cout<<(x*4)+y<<"\n";
    }
	return 0;
}
