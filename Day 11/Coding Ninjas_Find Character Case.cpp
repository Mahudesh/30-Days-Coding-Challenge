Problem:
Write a program that takes a character as input and prints either 1 0 or -1.
1 if the character is an uppercase letter.
0 if the character is a lowercase letter.
-1 if the character is not an alphabet.

Input:

#include <iostream>
using namespace std;

int main() 
{
    char c;
    cin>>c;
    if(c>=65 && c<=97)
    cout<<"1";
    else if(c>=98 && c<=122)
    cout<<"0";
    else
    cout<<"-1";


    return 0;
}
