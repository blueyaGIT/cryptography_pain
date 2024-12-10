#ifndef ENCODER_H
# define ENCODER_H

# include <iostream>
# include <cstdlib>
# include <termios.h>
# include <unistd.h>
# include <map>
# include <string>

using namespace std;

enum type{
	encode,
	decode
};

enum code{
	morse_code,
	nato_phonetic,
	enigma,
	keys
};

// main functions
void encoding();
void decoding();
void morseCode(type operation, const string &input);

// util functions
void clearConsole();
char getch();

#endif /* ENCODER_H */