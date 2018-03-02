#include<stdio.h>

int main() 
{
	char str[50];
	int i,counter=0;
	printf("enter the sentence to count the number of numeric characters:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{if(str[i]>='0' && str[i]<='9')
		{
			counter=counter+1;
		}
	}
	printf("\nthe number of numeric in the sentence is:%d",counter);
	return 0;
}
