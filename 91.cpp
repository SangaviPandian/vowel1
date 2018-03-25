#include <iostream>
using namespace std;
int main() 
{
	int l,b,h;
	cin>>l>>b>>h;
	int volume,tsa;
	volume=l*b*h;
	tsa=2*((l*b)+(b*h)+(h*l));
	cout<<"\nVOLUME"<<volume;
	cout<<"\nTSA="<<tsa;
	return 0;
}
