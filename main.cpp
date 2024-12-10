#include "encoder.h"

int	main(void)
{
	int choice;
	clearConsole();
	cout << "Please choose Mode:" << endl;
	cout << "- 1 ---- Encode ---" << endl;
	cout << "- 2 ---- Decode ---" << endl;
	cout << "Mode: ";
	cin >> choice;
	if (choice == 1)
		encoding();
	else if (choice == 2)
		decoding();
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
		case 'Morsecode':
			cout << "Morsecode selected" << endl;
			cout << "Please enter message: ";
			cin >> msg;
			morseCode(encode, msg);
			break;
		
		case '2':
		case 'NATO':
			cout << "NATO Phonetic selected" << endl;
			cout << "Please enter message: ";
			cin >> msg;
			natocode(encode, msg);
			break;
		
		case '3':
		case 'Enigma':
			cout << "Enigma selected" << endl;
			cout << "Please enter message: ";
			cin >> msg;
			enigmacode(encode, msg);
			break;
		
		case '4':
		case 'Keys':
			cout << "Keys selected" << endl;
			cout << "Please enter message: ";
			cin >> msg;
			keys_code(encode, msg);
			break;
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
		case 'Morsecode':
			cout << "Morsecode selected" << endl;
			cout << "Please enter message: ";
			cin >> msg;
			morseCode(decode, msg);
			break;
		
		case '2':
		case 'NATO':
			cout << "NATO Phonetic selected" << endl;
			cout << "Please enter message: ";
			cin >> msg;
			natocode(decode, msg);
			break;
		
		case '3':
		case 'Enigma':
			cout << "Enigma selected" << endl;
			cout << "Please enter message: ";
			cin >> msg;
			enigmacode(decode, msg);
			break;
		
		case '4':
		case 'Keys':
			cout << "Keys selected" << endl;
			cout << "Please enter message: ";
			cin >> msg;
			keys_code(decode, msg);
			break;
	}
}
