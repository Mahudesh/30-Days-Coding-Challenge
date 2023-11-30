Problem:
Pass The Exam:

Input:
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int s1,s2,s3;
        cin>>s1>>s2>>s3;
        if(s1>=10 && s2>=10 && s3>=10 && (s1+s2+s3)>=100)
        cout<<"PASS"<<"\n";
        else
        cout<<"FAIL"<<"\n";
    }
	return 0;
}
