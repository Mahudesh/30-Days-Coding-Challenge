Problem:
Each item in Chef’s menu is assigned a spice level from 1 to 10. Based on the spice level, the item is categorised as:
MILD: If the spice level is less than 4.
MEDIUM: If the spice level is greater than equal to 4 but less than 7.
HOT: If the spice level is greater than equal to 7.
Given that the spice level of an item is X, find the category it lies in.

Input:
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int sp;
        cin>>sp;
        if(sp<4)
        cout<<"MILD"<<"\n";
        else if(sp>=4 && sp<7)
        cout<<"MEDIUM"<<"\n";
        else if(sp>=7)
        cout<<"HOT"<<"\n";
    }
	return 0;
}
