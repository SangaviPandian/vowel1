#include <iostream>
using namespace std;
int main() 
{
	int n1,n2,diff;
	cout<<"enter the number1:";
	cin>>n1;
	cout<<"enter the number2:";
	cin>>n2;
	diff=n1-n2;
	if(diff%2==0)
	{
		cout<<"\neven";
	}
	else
	{
		cout<<"\nodd";
	}
	return 0;
}
