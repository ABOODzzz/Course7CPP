//in this code user enter message and the code count how many words inside it while coping each word to a vector and then print it 
#include<iostream>
#include<string>
#include<vector>
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
void CopyEachWordInStringToVector(string s1,vector<string>&vWords, string delim) {
    string sWord;
    short pos = 0;
    
    while ((pos=s1.find(delim))!=std::string::npos) {
        sWord = s1.substr(0, pos);
        if (sWord != "")vWords.push_back(sWord);
        s1.erase(0, pos + delim.length());
    }
    if (s1 != "")vWords.push_back(s1);
}
void PrintVector(vector <string>vWords) {
    for (string& i : vWords) {
        cout << i << endl;
    }
}
short HowMuchWordsInString(string s1) {
    string delim = " ", sWord;
    short pos = 0,counter=0;
  
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
    vector <string> vWords;
    string S1 =ReadString("enter message here : ");
    CopyEachWordInStringToVector(S1,vWords,"");
    cout << "\nNum of wordds in string is : " << HowMuchWordsInString(S1) << endl;
    cout << "\nthe words inside the string are : " << endl;
    PrintVector(vWords);
    system("pause>0");
}
