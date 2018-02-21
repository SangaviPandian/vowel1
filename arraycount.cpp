#include <iostream>
using namespace std;
            int main() 
            {
	int array[100],n,k,i,temp=0;
	cout<<"enter the number of elements in an array";
	cin>>n;
	for(i=0;i<=n;i++)
	{
	cin>>array[i];
	}
	cout<<"enter the number of elements to add";
	cin>>k;
            for(i=0;i<=k;i++)
            {
 	temp=temp+array[i];
            }
            cout<<temp;
	return 0;
            }
