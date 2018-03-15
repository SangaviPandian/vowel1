#include <iostream>
 using namespace std;
int main(void) 
{
	int n1,n2,sum;
cout<<"enter the number1:";
	cin>>n1;
cout<<"enter the number2:";
	cin>>n2;
	sum=n1+n2;
	if(sum%2==0)
	{
		cout<<"\neven";
	}
	else
	{
		cout<<"\nodd";
	}
	return 0;
}
