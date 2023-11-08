Problem:
Provided n you have to find out the n-th Fibonacci Number. Handle edges cases like when n=1 or n=2 by using
conditionals like if else and return what's expected.

Input:

#include<bits/stdc++.h>
using namespace std;

int main()
{
       int num;
       cin>>num;
       int i=-1,j=1;
       int k=0;
       int f=0;
       while(k<=num)
       {
               f=i+j;
               i=j;
               j=f;
               k++;
       }
       cout<<f;
}
