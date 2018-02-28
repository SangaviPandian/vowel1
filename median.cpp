#include <iostream>
using namespace std;

int main() 
{
	int n,i,j,x[100],temp;
	
	for(i=0; i<n-1; i++) 
	{
        for(j=i+1; j<n; j++) 
        {
            if(x[j] < x[i]) 
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
        if(n%2==0) 
        {
        cout<<((x[n/2] + x[n/2 - 1]) / 2.0);
    } 
    else
    {
        cout<<x[n/2];
    }
	return 0;
}
}
