#include <iostream>
using namespace std;

int main() 
{
	int i,n,array[50],sum=0,avg;
cout<<"enter the size of the array";
	cin>>n;
cout<<"enter the array elements";
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	
	}
	for(i=0;i<n;i++)
	{
		sum=sum+array[i];
	}
	avg=sum/n;
	cout<<sum<<endl;
	cout<<avg<<endl;
	return 0;
}
