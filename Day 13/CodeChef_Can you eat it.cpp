Problem:

You are a person who is always fond of eating candies. Your friend gave you a candy of length N, to eat during the break period of your school.
You start eating this candy from one of the ends. But as it is not your candy, your friend told you to eat exactly K unit length of candy during each bite. You will stop eating if the candy's length becomes 0. This means that you have eaten the entire candy.
If at some point of time, the candy's length is positive, but less than K, you cannot take a bite thereafter.
Can you eat the complete candy? If yes, print the number bites it will take, else print −1.

Input:

#include <iostream>
using namespace std;
void func(int n, int k)
{
       if(n%k==0)
       cout<<n/k<<"\n";
       else
       cout<<"-1"<<"\n";
    
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,k;
        cin>>n>>k;
        func(n,k);
    }
	return 0;
}

