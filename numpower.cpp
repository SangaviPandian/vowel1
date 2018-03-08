#include <iostream>
using namespace std;
int main() 
{
	int num,flag=0,temp;
	cout<<"enter the number";
	cin>>num;
	temp=num;
	while(temp!=1)
	{
		if(temp%2!=0)
		{
			flag=1;
			break;
			
		}
		temp=temp/2;
	}
	if(flag==0)
	{
		cout<<num<<"is a power of 2"<<endl;
	}
	else if(flag==1)
	{
		cout<<num<<"is not a power of 2"<<endl;
	}
	return 0;
}
