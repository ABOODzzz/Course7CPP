//in this code the user can enter just one char either small or capital not (,1,2,_,+,=,<,{,}......etc) if it small turn it to capital if its capital to small 

#include<iostream>
#include<string>

using namespace std;

char ReadChar(string message) {
    string thing;
    do {
        cout << message;
        getline(cin, thing);
        cout << endl;

        if (thing.empty()) {
            cout << "Empty input. Please enter a character.\n";
        }
        else if (thing.length() > 1) {
            cout << "Too many characters. Enter just one.\n";
        }
        else if (thing[0] == ' ') {
            cout << "Space not allowed.\n";
        }
    } while (thing.empty() || thing.length() > 1 || thing[0] == ' ');

    return thing[0];
}
char TurnCharToSmallOrCapital(char thing) {
	if (thing >= 65 && thing <= 90)
		return thing += 32;
	else if (thing >= 97 && thing <= 122)return thing -= 32;
	else thing = TurnCharToSmallOrCapital(ReadChar("\n\nrenter char and it must be A,a,B,b not (,{,_,+.....etc : "));
}




int main() {
	char c = TurnCharToSmallOrCapital(ReadChar("enter char to turn it into capital or small : "));
	cout << "char after inverting is : " << c<<endl;
}
