#include <iostream>

#include<string.h>
using namespace std;
int main()

{

	char a[10];

	cin>>a;



	int i,flag=0,m;

	m=strlen(a);

	for(i=0;i<m;i++)

	{

		if(a[i]=='1' || a[i]=='0')

		{

			flag=1;

		}

		else

		{

			flag=0;

			break;

		}

		

	}

	if(flag==1)

	{

		cout<<"yes";

	}

	

}
