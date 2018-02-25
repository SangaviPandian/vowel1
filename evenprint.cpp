#include <iostream>
using namespace std;

int main() {
	int num,m =20,n=40;
    cout<<"Print Odd Numbers in a given range m to n:";
    for (num = m; num <= n; num++)
    {
    	if (num % 2 == 0)
    	cout<<num<<endl;
    	}
	return 0;
}
