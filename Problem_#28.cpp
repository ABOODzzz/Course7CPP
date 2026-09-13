//in this cdoe user can enter a string and each char in it will turn on to oppsite
#include<iostream>
#include<string>

using namespace std;

string ReadString(string message) {
    string thing;
    do {
        cout << message;
        getline(cin, thing);
        cout << endl;

        if (thing.empty()) {
            cout << "Empty input. Please enter a character.\n";
        }
       
    } while (thing.empty());

    return thing;
}
char TurnCharsToSmallOrCapital(char thing) {
   
        return isupper(thing) ? tolower(thing) : toupper(thing);
    
    
}

string TurnStringToSmallOrCapital(string thing) {
    for (int i = 0;i<thing.length();i++) {
        thing[i] = TurnCharsToSmallOrCapital(thing[i]);
    }
    return thing;
}




int main() {
	string thing = TurnStringToSmallOrCapital(ReadString("enter message to turn it into capital or small : "));
	cout << "message after inverting is : " << thing<<endl;
}
