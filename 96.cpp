#include<iostream>
using namespace std;


int main()



{



int num,i,flag=0;



cin>>num;



for(i=2;i<=num/2;i++)



{



if(num%i==0)



{



flag=1;



break;



}



}



if(flag==0)



{

cout<<"\n no";



}



else



{



cout<<"\n yes";



}



return 0;



}
