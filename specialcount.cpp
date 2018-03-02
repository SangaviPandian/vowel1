#include <iostream>
using namespace std;

int main() {
	char str[100];
	int i,counter=0;
	printf("enter the sentence to count the number of numeric charaters in the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(!(str[i]>='0' && str[i]<='9'&&str[i]>='a' && str[i]<='z'&&str[i]>='A' && str[i]<='Z'))
		{
			counter=counter+1;
		}
	}
	printf("\nthe number of special symbols in the sentence is:%d",counter);
	return 0;
}
