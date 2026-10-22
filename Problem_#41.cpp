//in this code user can enter a  string then print it in reverse order using vector methods .
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


string ReverseWordsInString(string s1) {
	vector <string> vString;
	string s2 = "";
	vString = SplitString(s1," ");
	vector <string>::iterator iter = vString.end();
	while (iter!=vString.begin()) {
		iter--;
		s2 += *iter + " ";
	}
	s2 = s2.substr(0, s2.length() - 1);
	return s2;
}

int main()
{
	string s1 = ReadString("enter the string here :");
	cout << "the string is : " << s1<<endl;
	cout << "string after reversing words : " << ReverseWordsInString(s1);
	
	system("pause>0");
}
