Problem:
Chef's computer has N GB of free space. He wants to save X files, each of size 1 GB and 
Y files, each of size 2 GB on his computer. Will he be able to do so?
Chef can save all the files on his computer only if the total size of the files is less than or equal to the space available on his computer.


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
