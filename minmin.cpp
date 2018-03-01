#include <iostream>
using namespace std;

int main() 
            {
	int a,b,c,d,minutes1,minutes2,tminutes1,tminutes2,sub,result,result1;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	minutes1=a*60;
	minutes2=c*60;
	tminutes1=minutes1+b;
	tminutes2=minutes2+d;
	sub=tminutes1-tminutes2;
	result=sub/60;
	cout<<result;
	result1=sub%60;
	if(result1==0)
	{
	cout<<"0";
	}
	else
	cout<<result1;
	return 0;	
	}
