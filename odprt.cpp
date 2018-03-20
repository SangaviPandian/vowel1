#include <iostream>
using namespace std;
int main() 
{
	int num,rem,rev=0;
	cout<<"enter the number:";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	num=rev;
	while(num!=0)
	{
		rem=num%10;
		if(rem%2==1)
		{
		cout<<rem;
		}
		num=num/10;
	}
	return 0;

}
