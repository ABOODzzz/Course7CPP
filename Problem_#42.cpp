//this task is when  a user enter string he can replace a string using this code
//code 1:
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

string ReplaceString(string s1) {
	string s =" ";
	string Replace = ReadString("Enter the word you want to replace: ");
	string WordToReplaceWith = ReadString("Enter the word you want to replace it with: ");
	short pos = s1.find(Replace);
	while (pos!=string::npos) {
		s1 = s1.replace(pos, Replace.length(), WordToReplaceWith);
		pos = s1.find(Replace);
	}
	return s1;
}

int main()
{
	string s1 = ReadString("enter the string here : ");
	cout << "The new string is : " << ReplaceString(s1) << endl;
	
	system("pause>0");
}
/*//code 2
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
vector <string> SplitString(string s1,string delim) {
	vector <string>vString;
	short pos = 0;
	string sWord;
	while ((pos = s1.find(delim)) != std::string::npos) {
		sWord = s1.substr(0, pos);
		if (sWord != "")vString.push_back(sWord);
		s1.erase(0, pos + delim.length());
	}
	if (s1 != "")vString.push_back(s1);
	return vString;
 }


string ReplacingWordsInString(string s1) {
	string WordToReplace = ReadString("\nenter the word to replace :");
	string NewWord = ReadString("\nenter the new word :");
	vector <string> vString;
	string s2 = "";
	vString = SplitString(s1," ");
	vector <string>::iterator iter = vString.begin();
	while (iter!=vString.end()) {
		
		if(*iter==WordToReplace)
			s2 += NewWord + " ";
		else
			s2 += *iter + " "; 
		iter++;
	}
	s2 = s2.substr(0, s2.length() - 1);
	return s2;
}

int main()
{
	string s1 = ReadString("enter the string here :");
	cout << "the string is : " << s1<<endl;
	cout << "string after replacing words : "<<ReplacingWordsInString(s1)<<endl;
	
	system("pause>0");
}
*/
