#include "encoder.h"

std::map<char, std::string> morseCodeMap = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
    {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
    {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
    {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
    {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
    {'Z', "--.."}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"},
    {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."},
    {'0', "-----"}, {' ', "/"}
};

std::map<std::string, char> reverseMorseCodeMap = {
    {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'}, {".", 'E'},
    {"..-.", 'F'}, {"--.", 'G'}, {"....", 'H'}, {"..", 'I'}, {".---", 'J'},
    {"-.-", 'K'}, {".-..", 'L'}, {"--", 'M'}, {"-.", 'N'}, {"---", 'O'},
    {".--.", 'P'}, {"--.-", 'Q'}, {".-.", 'R'}, {"...", 'S'}, {"-", 'T'},
    {"..-", 'U'}, {"...-", 'V'}, {".--", 'W'}, {"-..-", 'X'}, {"-.--", 'Y'},
    {"--..", 'Z'}, {".----", '1'}, {"..---", '2'}, {"...--", '3'}, {"....-", '4'},
    {".....", '5'}, {"-....", '6'}, {"--...", '7'}, {"---..", '8'}, {"----.", '9'},
    {"-----", '0'}, {"/", ' '}
};

void morseCode(type operation, const string &input) {
    if (operation == encode) {
        for (char c : input) {
            c = toupper(c);
            if (morseCodeMap.find(c) != morseCodeMap.end()) {
                cout << morseCodeMap[c] << " ";
            } else {
                cout << "? ";
            }
        }
    } else if (operation == decode) {
        string morseChar;
        for (char c : input) {
            if (c != ' ') {
                morseChar += c;
            } else {
                if (reverseMorseCodeMap.find(morseChar) != reverseMorseCodeMap.end()) {
                    cout << reverseMorseCodeMap[morseChar];
                } else {
                    cout << '?';
                }
                morseChar.clear();
            }
        }
        if (!morseChar.empty() && reverseMorseCodeMap.find(morseChar) != reverseMorseCodeMap.end()) {
            cout << reverseMorseCodeMap[morseChar];
        }
    }
    cout << endl;
}
