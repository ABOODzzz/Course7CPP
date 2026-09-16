//in this code user can check how many of one char is in the message 
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




short HowManyTimesCharInMessage(string message,char CharInMessage) {
    short counter = 0;
    for (int i = 0; i < message.length(); i++) {
        if (message[i]==CharInMessage)counter++;
    }
    return counter;
}

short HowManyTimesCharInMessageCapitalAndSmall(string message, char CharInMessage) {
    short counter = 0;
    for (char c :message) {
        
        if ((isupper(CharInMessage) && (c == CharInMessage || c == tolower(CharInMessage))))counter++;

        else if (islower(CharInMessage) && (c == CharInMessage || c  == toupper(CharInMessage)))counter++;
        else continue;
    }
    return counter;
}
 
int main() {
    string Message = ReadString("enter message here : ");
    char CharInMessage = ReadChar("enter the char that u want to search: ");
    cout << "\n\nthe char (" << CharInMessage << ") has show up in (" << Message << ") for " << HowManyTimesCharInMessage(Message,CharInMessage)<<endl;
    cout << "\n\nthe char (" << CharInMessage << ") has show up as a Capital 'A'& Small'a' in (" << Message << ") for " << HowManyTimesCharInMessageCapitalAndSmall(Message, CharInMessage);
}
