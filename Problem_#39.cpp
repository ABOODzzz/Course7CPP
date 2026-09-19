//in this code ive made a function to rejoin the string from the vector i used in code1 itorator and code 2 is more simple 
//code1
#include <string>
#include <iostream>
#include<vector>
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
void CopyEachWordInStringToVector(string s1, vector<string>& vWords, string delim) {
	string sWord;
	short pos = 0;

	while ((pos = s1.find(delim)) != std::string::npos) {
		sWord = s1.substr(0, pos);
		if (sWord != "")vWords.push_back(sWord);
		s1.erase(0, pos + delim.length());
	}
	if (s1 != "")vWords.push_back(s1);
}
void PrintVector(vector <string>vWords) {
	for (string& i : vWords) {
		cout << i << endl;
	}
}
string JoinEachWordInVectorToString( vector<string>vWords, string delim) {
	string s1="";
	
	if (!vWords.empty()) {
		vector<string>::iterator it;
		short counter = 0;
		for (it = vWords.begin(); it != vWords.end(); ++it) {
			s1 += *it;
			if (counter < vWords.size() - 1)
				s1 += delim;
			counter++;
			
		}
		return s1;
	}
	else return "empty";
}
int main()
{
	vector <string> vWords;
	string S1 = ReadString("enter message here : ");
	CopyEachWordInStringToVector(S1, vWords, " ");
	cout << "\nthe words inside the string are : " << endl;
	PrintVector(vWords);
	cout << "\nthe string words after joining are : "<<JoinEachWordInVectorToString(vWords," ") << endl;
	
	system("pause>0");
}
/*
#include <string>
#include <iostream>
#include<vector>
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
void CopyEachWordInStringToVector(string s1, vector<string>& vWords, string delim) {
	string sWord;
	short pos = 0;

	while ((pos = s1.find(delim)) != std::string::npos) {
		sWord = s1.substr(0, pos);
		if (sWord != "")vWords.push_back(sWord);
		s1.erase(0, pos + delim.length());
	}
	if (s1 != "")vWords.push_back(s1);
}
void PrintVector(vector <string>vWords) {
	for (string& i : vWords) {
		cout << i << endl;
	}
}
string JoinEachWordInVectorToString( vector<string>vWords, string delim) {
	string s1="";
	for (string& s : vWords) {
		s1 = s1 + s + delim;
	}
	return s1.substr(0, s1.length() - delim.length());
}
int main()
{
	vector <string> vWords;
	string S1 = ReadString("enter message here : ");
	CopyEachWordInStringToVector(S1, vWords, " ");
	cout << "\nthe words inside the string are : " << endl;
	PrintVector(vWords);
	cout << "\nthe string words after joining are : "<<JoinEachWordInVectorToString(vWords," ") << endl;
	
	system("pause>0");
}
*/
