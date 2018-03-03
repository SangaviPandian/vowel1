#include <iostream>
using namespace std;
int main() 
{
	int array[100];
	int i,n;
	cout<<"enter the size of the array:";
cin>>n;
	cout<<"\n the array elements are:";
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	int max=array[0];
	int min=array[0];
	for(i=1;i<n;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
		if(array[i]<min)
		{
			min=array[i];
		}
	}
cout<<min;
	cout<<max;

	return 0;
}
