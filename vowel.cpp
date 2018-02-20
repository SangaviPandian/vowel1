#include <iostream>
using namespace std;

int main() {
	char c;
	int  vowel;
	cout<<"enter the character";
 cin>>c;
 vowel=(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
 if(vowel)
 {
 	cout<<"it is a vowel";
 }
 else
 {
 	cout<<"not a vowel";
 }
	return 0;
}
