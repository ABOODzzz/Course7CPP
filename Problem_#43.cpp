//in this code user can enter the string and replace words in both match case and unmatch case
#include <string>
#include <iostream>
#include <vector>
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
vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord;
	
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}
string JoinString(vector<string> vString, string Delim)
{
	string S1;
	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}
string LowerAllString(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		S1[i] = tolower(S1[i]);
	}
	return S1;
}

string ReplaceWordInStringUsingSplit(string S1, string
	StringToReplace, string sRepalceTo, bool MatchCase = true)
{
	vector<string> vString = SplitString(S1, " ");
	for (string& s : vString)
	{
		if (MatchCase)
		{
			if (s == StringToReplace)
			{
				s = sRepalceTo;
			}
		}
		else
		{
			if (LowerAllString(s) ==
				LowerAllString(StringToReplace))
			{
				s = sRepalceTo;
			}
		}
	}
	return JoinString(vString, " ");
}


int main()
{
	string S1 = ReadString("\nenter the string here :");
	string StringToReplace =ReadString("\nenter the word to replace: ");
	string ReplaceTo = ReadString("\nenter the word u want to replace with :");
	cout << "\nOriginal String:\n" << S1;
	cout << "\n\nReplace with match case: ";
	cout << "\n" << ReplaceWordInStringUsingSplit(S1,
		StringToReplace, ReplaceTo);
	cout << "\n\nReplace with dont match case: ";
	cout << "\n" << ReplaceWordInStringUsingSplit(S1,
		StringToReplace, ReplaceTo, false);
	system("pause>0");
}
