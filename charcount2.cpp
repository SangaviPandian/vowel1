#include <iostream>

int main()
{
    using std::string;
    using std::cin;
    using std::cout;    

    string aString;
    char tempChar;
    while (!cin.eof())
    {
        cin.get(tempChar);
        if(tempChar!=' ')
        aString += tempChar;
    }
    
    cout << aString;
    cout<<aString.length();
    
    return 0;
}
