//in this code the user enter a message and the code print each word in new line and rejoin it using vectors and dynamic array
#include <string>
#include <iostream>
#include <vector>
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

void CopyEachWordInStringToVector(string s1, vector<string>& vWords, string delim) {
    string sWord;
    short pos = 0;

    while ((pos = s1.find(delim)) != std::string::npos) {
        sWord = s1.substr(0, pos);
        if (sWord != "") vWords.push_back(sWord);
        s1.erase(0, pos + delim.length());
    }
    if (s1 != "") vWords.push_back(s1);
}

void CopyEachWordInStringToArray(string s1, string array1[], int size, string delim) {
    string sWord;
    short pos = 0;
    int i = 0;

    while ((pos = s1.find(delim)) != std::string::npos && i < size) {
        sWord = s1.substr(0, pos);
        if (sWord != "") {
            array1[i] = sWord;
            i++;                   
        }
        s1.erase(0, pos + delim.length());
    }

    
    if (s1 != "" && i < size) {
        array1[i] = s1;
    }
}

void PrintVector(vector<string> vWords) {
    for (string& i : vWords) {
        cout << i << endl;
    }
}

string JoinString(vector<string> vWords, string delim) {
    string s1 = "";
    for (string& s : vWords) {
        s1 = s1 + s + delim;
    }
    return s1.substr(0, s1.length() - delim.length());
}

short HowMuchWordsInString(string s1, string delim) {
    string sWord = "";
    short pos = 0, counter = 0;

    while ((pos = s1.find(delim)) != std::string::npos) {
        sWord = s1.substr(0, pos);
        if (sWord != "") counter++;
        s1.erase(0, pos + delim.length());
    }
    if (s1 != "") counter++;

    return counter;
}

string JoinString(string array1[], int size, string delim) {
    string s1 = "";
    for (int i = 0; i < size; i++) {      
        s1 = s1 + array1[i] + delim;
    }
    return s1.substr(0, s1.length() - delim.length());
}

int main() {
    vector<string> vWords;
    string S1 = ReadString("enter message here : ");

    CopyEachWordInStringToVector(S1, vWords, " ");
    PrintVector(vWords);
    cout << "\n\n";
    cout << "vector after joining : \n" << JoinString(vWords, " ") << endl;

    const short size = HowMuchWordsInString(S1, " ");
    string* array1 = new string[size];
    CopyEachWordInStringToArray(S1, array1, size, " ");
    cout << "\nArray after joining : \n" << JoinString(array1, size, " ") << endl;

    delete[] array1;          

    system("pause>0");
}
