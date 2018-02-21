#include <iostream>
using namespace std;

int main() {
	int num,n=0;
	cout<<"enter the number";
	cin>>num;
	while(num>0)
	{
		num=num/10;
		n++;
	}
	cout<<"no of digits in an integer"<<n;
	return 0;
}
