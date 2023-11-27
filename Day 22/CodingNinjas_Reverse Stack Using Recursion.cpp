Problem:
Reverse a given stack of N integers using recursion. You are required to make changes in the input parameter itself.

Input:

void reverseStack(stack<int> &stack)
 {
     vector<int>vec;
     while(!stack.empty())
     {
         vec.push_back(stack.top());
         stack.pop();
     }
     for(int i=0;i<vec.size();i++)
     {
         stack.push(vec[i]);
     }
}
