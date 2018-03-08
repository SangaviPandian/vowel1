#include <iostream>
using namespace std;
int main() 
{
	int num,temp,sum=0;
	cout<<"enter the number";
	cin>>num;
	temp=num;
	while(num!=0)
	{
		temp=num%10;
		sum=sum+temp;
		num=num/10;
 
	}
	cout<<sum;
	return 0;
}
