Problem : Oasis visits a flower shop.Shop has N flowers each being a specific type and every flower costs 1 unit.
You are given type of each flower in an array P=[p1,p2,...pN]. If he buys a flower of type P, then he will get
al flowers whose type lies between P' to P'+4(both inclusive) for free.
You need to find and print the price Oasis has to pay to buy all flowers.

Input;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=1;
    int temp=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    temp= arr[0]+4;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=temp)
        {
            continue;
        }
        else
        {
            temp=arr[i]+4;
            c++;
        }
    }
    cout<<c;

}
