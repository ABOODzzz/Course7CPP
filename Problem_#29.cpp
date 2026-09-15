//in this code can user see lenght of the string and how many of capital and small letters in th string that they typed
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
short HowManyCapitalLettersInMessage(string message) {
    short counter = 0;
    for (int i = 0;i<message.length();i++) {
        if (isupper(message[i]))counter++;
    }
    return counter;
}
short HowManySmallLettersInMessage(string message) {
    short counter = 0;
    for (int i = 0; i < message.length(); i++) {
        if (islower(message[i]))counter++;
    }
    return counter;
}



int main() {
   string thing = TurnStringToSmallOrCapital(ReadString("enter message : "));
   short countCapitalLetters=HowManyCapitalLettersInMessage(thing);
   short countSmallLetters=HowManySmallLettersInMessage(thing);
   cout << "string length is = " << thing.length()<<endl;
   cout << "small letters  count = " << countSmallLetters << endl;
   cout << "capital letters count = " << countCapitalLetters<< endl;

	
}
