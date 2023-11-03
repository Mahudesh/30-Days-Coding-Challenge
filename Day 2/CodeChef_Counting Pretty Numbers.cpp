Problem:

Vasya likes the number 239. Therefore, he considers a number pretty if its last digit is 2, 3 or 9.Vasya wants to watch the numbers between L and R 
(both inclusive), so he asked you to determine how many pretty numbers are in this range. Can you help him?

Input:

  #include <iostream>
using namespace std;

int main() 
{
    int t,l,r,c=0;
    cin>>t;
   // vector<int>arr;
    for(int i=1;i<=t;i++)
    {
        cin>>l>>r;
        c=0;
        for(int j=l;j<=r;j++)
        {
           
                int k=j%10;
                if(k==2 || k==3 || k==9)
                {
                    c++;
                }
            
        }
        cout<<c<<"\n";
    }
	return 0;
}
