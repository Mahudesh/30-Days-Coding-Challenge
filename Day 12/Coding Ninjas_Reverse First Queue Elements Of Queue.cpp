Problem:
You are given QUEUE containing N integers and integer K. You need to reverse the order of the first K elements of the queue,
leaving the other elements in the same relative order. You can only use the standard operations of the
QUEUE STL.

Input:

#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> st;
    int n=q.size();
    for(int i=0;i<k;i++)
    {
        st.push(q.front());
        q.pop();
    }
    queue<int>qu;
    while(!st.empty())
    {
        qu.push(st.top());
        st.pop();
    }
    for(int i=k;i<n;i++)
    {
        qu.push(q.front());
        q.pop();
    }
    return qu;
}
