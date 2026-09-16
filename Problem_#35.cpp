//in this code the user can enter a message and the code will print the vowels 
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
            cout << "Empty input. Please enter a clear message: .\n";
        }

    } while (thing.empty());

    return thing;
}
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
void PrintVowlesInsideString(string S1)
{
    short Counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        
     
        if (IsItVowels(S1[i]))
            cout << S1[i]<<"   ";
        
       
    }
    
}


int main()
{
    string s1 =ReadString("enter message here : ");
    
    cout << "\n\nthe vowels inside the message are  : "; PrintVowlesInsideString(s1);
    
    
    system("pause>0");
}
