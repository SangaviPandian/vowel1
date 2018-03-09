#include <iostream>
 using namespace std;
int main() 
{
	int n,m,pro;
	cout<<"enter the number1:";
	cin>>n;
	cout<<"\nenter the number2:";
	cin>>m;
	pro=n*m;
	if(pro%2==0)
	{
		cout<<"\n even";
	}
	else
	{
		cout<<"\n odd";
	}
	return 0;
}
