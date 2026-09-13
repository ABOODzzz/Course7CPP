//turn to small 
#include<iostream>
#include<string>

using namespace std;

string ReadString(string message) {
	string thing="";
	cout << message; getline(cin, thing); return thing;

}
string TurnFirstLetterToSmall(string thing) {
	bool IsFirstLetter = true;
	if (!thing.empty()) {
		for (short i = 0; i < thing.length(); i++) {
			if ((thing[i] >= 65 && thing[i] <=90 ) && (thing[i] != ' ' && IsFirstLetter)) {
				thing[i] = tolower(thing[i]);
			}
			IsFirstLetter = (thing[i] == ' ' ? true : false);
		}
	}
	return thing;
}
void PrintMessage(string thing) {
	if (!thing.empty())
		cout << "message is : " << thing;
	else cout << "\nthere is no any message";
}


int main() {
	PrintMessage(TurnFirstLetterToSmall(ReadString("enter ur message : ")));
}
