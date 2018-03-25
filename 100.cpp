#include <iostream>
 using namespace std;
int main() 
{
	int n,remainder,product=1;
	cin>>n;
	while(n!=0)
	{
		remainder=n%10;
		product=product*remainder;
		n=n/10;
	}
	cout<<product;
	return 0;
}
