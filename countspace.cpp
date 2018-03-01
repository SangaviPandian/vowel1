#include <iostream>

int main()
{
    using std::string;
    using std::cin;
    using std::cout;    

    string aString;
    char tempChar;
    int i=0;
    while (!cin.eof())
    {
        cin.get(tempChar);
        if(tempChar==' ')
        aString += tempChar;
        i++;
    }
    
    cout << aString;
    cout<<aString.length();
    
    return 0;
}
