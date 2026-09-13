//in this code user can send a message and the code turn it into capital and small letters for all 
#include<iostream>
#include<string>

using namespace std;

string ReadString(string message) {
	string thing = "";
	do
	{
		cout << message; getline(cin, thing); cout << endl; 
		if (thing.empty())message = "reenter pls don't send anempty message :) : ";
	} while (thing.empty());
	return thing;

}
string TurnAllLttersToCapital(string thing) {
	
	
		
		for (short i = 0; i < thing.length(); i++) {
			if ((thing[i] >= 97 && thing[i] <= 122) && thing[i] != ' ') {
				thing[i] = toupper(thing[i]);
			}

		}
	
	return thing;
	
}
string TurnAllLttersToSmall(string thing) {



	for (short i = 0; i < thing.length(); i++) {
		if ((thing[i] >= 65 && thing[i] <= 90) && thing[i] != ' ') {
			thing[i] = tolower(thing[i]);
		}

	}

	return thing;

}
void PrintMessage(string thing) {
	if (!thing.empty())
		cout << "message is : " << thing << endl;
	else cout << "\nthere is no any message"<<endl;
}


int main() {
	string thing = ReadString("enter ur message : ");
	PrintMessage(TurnAllLttersToCapital(thing));
	PrintMessage(TurnAllLttersToSmall(thing));
}
