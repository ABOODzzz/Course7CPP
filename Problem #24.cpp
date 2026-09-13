//in this code the user can send a message and turn the first letter to capital insted of small 
#include<iostream>
#include<string>

using namespace std;

string ReadString(string message) {
	string thing="";
	cout << message; getline(cin, thing); return thing;

}
string TurnFirstLetterToCapital(string thing) {
	bool IsFirstLetter = true;
	if (!thing.empty()) {
		for (short i = 0; i < thing.length(); i++) {
			if ((thing[i] >= 97 && thing[i] <= 122) && (thing[i] != ' ' && IsFirstLetter)) {
				thing[i] -=32;
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
	PrintMessage(TurnFirstLetterToCapital(ReadString("enter ur message : ")));
}
