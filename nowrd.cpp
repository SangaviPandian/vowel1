#include<iostream>
#include<stdio.h>
 
using namespace std;
 
int main()
{
    char a[100];
    int i,count=1;
    
    cout<<"Enter a string:";
    cin.get(a,20);
    
    for(i=0;a[i]!='\0';++i)
    {
        if(a[i]==' ')
            count++;
    }
    
    cout<<"\nThere are "<<count+1
    <<" words in the given string";
 
    return 0;
}
