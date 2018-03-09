#include <iostream>


using namespace std;
int main() 

{

	int array[20];

	int n,i,max=array[0];

	cout<<"enter the number of elements:";

	cin>>n;

	cout<<"\n enter the array elements:";

	for(i=0;i<n;i++)

	{

		cin>>array[i];

	}

	for(i=0;i<n;i++)

	{

		if(array[i]>max)

		{

			max=array[i];

		}

	}

cout<<"\nthe maximum of the numbers is:"<<max;

	return 0;

}
