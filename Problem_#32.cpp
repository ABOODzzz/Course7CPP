//in this code user can check if the char is  vowel or not 
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
        
    } while (thing.empty() || thing.length() > 1 || thing[0] == ' ' );

    return thing[0];
}

bool IsItVowels(char char1) {
    
    char1 = tolower(char1);
    return ((char1 == 'a') || (char1 == 'e') || (char1 == 'i') || (char1 == 'o') || (char1 == 'u'));
    
}

void PrintResult(char char1) {
    if (IsItVowels(char1))cout << "\n\nYes Letter \'" << char1 << "\' is vowel" << endl;
    else  cout << "\n\nNo Letter \'" << char1 << "\' isn't vowel" << endl;
}

int main()
{
    string s1 = ";";
    char char1 = ReadChar("\nenter char that u want to search for : ");
    
    PrintResult(char1);
    system("pause>0");
}
