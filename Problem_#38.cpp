#include <string>
#include <iostream>
using namespace std;
string ReadString(string message) {
	string thing;
	do {
		cout << message;
		getline(cin, thing);
		cout << endl;

		if (thing.empty()) {
			cout << "Empty input. Please enter a clear message: .\n";
		}

	} while (thing.empty());

	return thing;
}
string TrimLeft(string S1,char delim)
{
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != delim)
		{
			return S1.substr(i, S1.length() - i);
		}
	}
	return "";
}
string TrimRight(string S1,char delim)
{
	for (short i = S1.length() - 1; i >= 0; i--)
	{
		if (S1[i] != delim)
		{
			return S1.substr(0, i + 1);
		}
	}
	return "";
}
string Trim(string S1,char delim)
{
	return (TrimLeft(TrimRight(S1,delim),delim));
}

int main()
{
	string S1 = ReadString("enter string here: ");
	cout << "\nString = " << S1;
	cout << "\n\nTrim Left = " << TrimLeft(S1,'-');
	cout << "\nTrim Right = " << TrimRight(S1,'-');
	cout << "\nTrim = " << Trim(S1,'-');
	system("pause>0");
}
