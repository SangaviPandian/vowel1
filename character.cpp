#include <iostream>
using namespace std;

int main() {
	char ch;
	cout<<"enter the character"<<endl;
	cin>>ch;
	if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
	{
		cout<<"it is a character"<<endl;
	}
	else
	{
		cout<<"not a character"<<endl;
	}
	return 0;
}
