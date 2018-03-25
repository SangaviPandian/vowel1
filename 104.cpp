#include<iostream>

using namespace std;

int main()
{
int N,K,r=1;
cout<<"Enter the values of N and K : "<<endl;
cin>>N>>K;
for(int i=0;i<K;i++)
{
r=r*N;	
}
cout<<"The result is : "<<r<<endl;
return 0;
}
