#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString()
{
	string UserString = " ";
	cout << "Enter a string:\n";
	getline(cin, UserString);
	return UserString;
}

bool IsVowel(char Letter)
{

	Letter = tolower(Letter);

	return Letter == 'a' || Letter == 'o' || Letter == 'u' || Letter == 'e' || Letter == 'i';

}

void PrintVowels(string& UserString)
{
	short Counter = 0;
	for (short i = 0; i < UserString.length(); i++)
	{

		if (IsVowel(UserString[i]))
			cout << UserString[i] << "\t";

	}
}

int main()
{
	string UserString = ReadString();

	cout << "Vowels in the string are = ";
	PrintVowels(UserString);
	
	return 0;
}