#include <iostream>
using namespace std;

int main() 
{
	int n1,n2,i;
	char sym;
	cout<<"\n enter the two numbers:\n";
		cin>>n1>>sym>>n2;
		if(sym=='/')
		{
		cout<<n1/n2;
		}
		else
		{
			cout<<n1%n2;
		}

	return 0;
}
