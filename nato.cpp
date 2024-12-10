#include "encoder.h"

std::map<char, std::string> natoPhoneticMap = {
    {'A', "Alpha"}, {'B', "Bravo"}, {'C', "Charlie"}, {'D', "Delta"}, {'E', "Echo"},
    {'F', "Foxtrot"}, {'G', "Golf"}, {'H', "Hotel"}, {'I', "India"}, {'J', "Juliett"},
    {'K', "Kilo"}, {'L', "Lima"}, {'M', "Mike"}, {'N', "November"}, {'O', "Oscar"},
    {'P', "Papa"}, {'Q', "Quebec"}, {'R', "Romeo"}, {'S', "Sierra"}, {'T', "Tango"},
    {'U', "Uniform"}, {'V', "Victor"}, {'W', "Whiskey"}, {'X', "X-ray"}, {'Y', "Yankee"},
    {'Z', "Zulu"}, {'1', "One"}, {'2', "Two"}, {'3', "Three"}, {'4', "Four"},
    {'5', "Five"}, {'6', "Six"}, {'7', "Seven"}, {'8', "Eight"}, {'9', "Nine"},
    {'0', "Zero"}, {' ', "Space"}
};

std::map<std::string, char> reverseNatoPhoneticMap = {
    {"Alpha", 'A'}, {"Bravo", 'B'}, {"Charlie", 'C'}, {"Delta", 'D'}, {"Echo", 'E'},
    {"Foxtrot", 'F'}, {"Golf", 'G'}, {"Hotel", 'H'}, {"India", 'I'}, {"Juliett", 'J'},
    {"Kilo", 'K'}, {"Lima", 'L'}, {"Mike", 'M'}, {"November", 'N'}, {"Oscar", 'O'},
    {"Papa", 'P'}, {"Quebec", 'Q'}, {"Romeo", 'R'}, {"Sierra", 'S'}, {"Tango", 'T'},
    {"Uniform", 'U'}, {"Victor", 'V'}, {"Whiskey", 'W'}, {"X-ray", 'X'}, {"Yankee", 'Y'},
    {"Zulu", 'Z'}, {"One", '1'}, {"Two", '2'}, {"Three", '3'}, {"Four", '4'},
    {"Five", '5'}, {"Six", '6'}, {"Seven", '7'}, {"Eight", '8'}, {"Nine", '9'},
    {"Zero", '0'}, {"Space", ' '}
};

void natoPhonetic(type operation, const string &input) {
    if (operation == encode) {
        for (char c : input) {
            c = toupper(c);
            if (natoPhoneticMap.find(c) != natoPhoneticMap.end()) {
                cout << natoPhoneticMap[c] << " ";
            } else {
                cout << "? ";
            }
        }
    } else if (operation == decode) {
        string natoWord;
        for (char c : input) {
            if (c != ' ') {
                natoWord += c;
            } else {
                if (reverseNatoPhoneticMap.find(natoWord) != reverseNatoPhoneticMap.end()) {
                    cout << reverseNatoPhoneticMap[natoWord];
                } else {
                    cout << '?';
                }
                natoWord.clear();
            }
        }
        if (!natoWord.empty() && reverseNatoPhoneticMap.find(natoWord) != reverseNatoPhoneticMap.end()) {
            cout << reverseNatoPhoneticMap[natoWord];
        }
    }
    cout << endl;
}
