#include <iostream>
using namespace std;

            int main() 
            {
	int num,pow,i,result=1;
	cout<<"enter the number";
	cin>>num;
	cout<<"enter the power";
	cin>>pow;
	while(pow!=0)
	{
	result*=num;
	pow--;
	}
	cout<<result;
	return 0;
            }
