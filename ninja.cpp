#include <iostream>
using namespace std;
int main() 
{
	int n1,n2,i;
	cout<<"\nenter the two numbers:";
	cin>>n1>>n2;
	if(n1>n2)
	{
	cout<<n1-n2;
	}
	else
	{
		cout<<n2-n1;
	}
	return 0;
}
