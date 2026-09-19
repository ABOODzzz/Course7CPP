//here the user enter a string and the code print each word in a saparit line and count how many words inside the string 
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

bool IsItWhiteSpace(char char1) {
    
 
    return char1==' ';
    
}
void PrintEachWordInString(string s1) {
    string delim = " ",sWord;
    short pos = 0;
    cout << "\nur each word in ur string is : " << endl;
    while ((pos=s1.find(delim))!=std::string::npos) {
        sWord = s1.substr(0, pos);
        if (sWord != "")cout << sWord << endl;
        s1.erase(0, pos + delim.length());
    }
    if (s1 != "")cout << s1 << endl;
}
short HowMuchWordsInString(string s1) {
    string delim = " ", sWord;
    short pos = 0,counter=0;
    cout << "\nur each word in ur string is : " << endl;
    while ((pos = s1.find(delim)) != std::string::npos) {
        sWord = s1.substr(0, pos);
        if (sWord != "")counter++;
        s1.erase(0, pos + delim.length());
    }
    if (s1 != "")counter++;
    return counter;
}

int main()
{
    string S1 =ReadString("enter message here : ");
    PrintEachWordInString(S1);
    cout << "\nNum of wordds in string is : " << HowMuchWordsInString(S1);
    system("pause>0");
}
