#include "../encoder.h"

int main(void)
{
    clearConsole();
    cout << "Please choose Mode:" << endl;
    cout << "- 1 ---- Encode ---" << endl;
    cout << "- 2 ---- Decode ---" << endl;
    cout << "Mode: ";
    switch(getch())
    {
        case '1':
            encoding();
            break;
        
        case '2':
            decoding();
            break;
    }
}

void encoding()
{
    string msg;
    clearConsole();
    cout << "Please choose encryption method:" << endl;
    cout << "- 1 ---- Morsecode ---" << endl;
    cout << "- 2 ---- NATO --------" << endl;
    cout << "- 3 ---- Enigma ------" << endl;
    cout << "- 4 ---- Keys --------" << endl;
    cout << "Method: ";

    switch(getch())
    {
        case '1':
            cout << "Morsecode selected" << endl;
            cout << "Please enter message:";
            cin.ignore(); // Ignore any leftover newline character in the input buffer
            getline(cin, msg);
            morseCode(encode, msg);
            break;
        
        case '2':
            cout << "NATO Phonetic selected" << endl;
            cout << "Please enter message:";
            cin.ignore(); // Ignore any leftover newline character in the input buffer
            getline(cin, msg);
            natoPhonetic(encode, msg);
            break;
        
        // case '3':
        //     cout << "Enigma selected" << endl;
        //     cout << "Please enter message:";
        //     cin.ignore(); // Ignore any leftover newline character in the input buffer
        //     getline(cin, msg);
        //     enigmacode(encode, msg);
        //     break;
        
        // case '4':
        //     cout << "Keys selected" << endl;
        //     cout << "Please enter message:";
        //     cin.ignore(); // Ignore any leftover newline character in the input buffer
        //     getline(cin, msg);
        //     keys_code(encode, msg);
        //     break;
    }
}

void decoding()
{
    string msg;
    clearConsole();
    cout << "Please choose encryption method:" << endl;
    cout << "- 1 ---- Morsecode ---" << endl;
    cout << "- 2 ---- NATO --------" << endl;
    cout << "- 3 ---- Enigma ------" << endl;
    cout << "- 4 ---- Keys --------" << endl;
    cout << "Method: ";

    switch(getch())
    {
        case '1':
            cout << "Morsecode selected" << endl;
            cout << "Please enter message:";
            cin.ignore(); // Ignore any leftover newline character in the input buffer
            getline(cin, msg);
            morseCode(decode, msg);
            break;
        
        case '2':
            cout << "NATO Phonetic selected" << endl;
            cout << "Please enter message:";
            cin.ignore(); // Ignore any leftover newline character in the input buffer
            getline(cin, msg);
            natoPhonetic(decode, msg);
            break;
        
        // case '3':
        //     cout << "Enigma selected" << endl;
        //     cout << "Please enter message:";
        //     cin.ignore(); // Ignore any leftover newline character in the input buffer
        //     getline(cin, msg);
        //     enigmacode(decode, msg);
        //     break;
        
        // case '4':
        //     cout << "Keys selected" << endl;
        //     cout << "Please enter message:";
        //     cin.ignore(); // Ignore any leftover newline character in the input buffer
        //     getline(cin, msg);
        //     keys_code(decode, msg);
        //     break;
    }
}
