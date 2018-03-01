#include <iostream>
#include<cctype>
using namespace std;

int main()
{
    char str[] = "12abc12";
 
    int alphabet = 0, number = 0, i;
    for (i=0; str[i]!= '\0'; i++)
    {
        if (isalpha(str[i]) != 0)
            alphabet++;
        else if (isdigit(str[i]) != 0)
            number++;
    }
 
    cout<<"Alphabetic_letters = "<<alphabet<<"Decimal_digits ="<< number;
 
    return 0;
}
