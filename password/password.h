
#ifndef PASSWORD_H
#define PASSWORD_H

// Arduino versioning.
#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"	// for digitalRead, digitalWrite, etc
#else
#include "WProgram.h"
#endif

#define MAX_PASSWORD_LENGTH 17

#define STRING_TERMINATOR '\0'

class Password {
public:
	Password(char* pass);
	
	void set(char* pass);
	bool is(char* pass);
	bool append(char character);
	void reset();
	bool evaluate();
	bool profile1hashevaluate();
	bool sdhashevaluate();
	bool profile2hashevaluate();
	//char* getPassword();
	//char* getGuess();
	
	//operators
	Password &operator=(char* pass);
	bool operator==(char* pass);
	bool operator!=(char* pass);
	Password &operator<<(char character);
	
	char guess[ MAX_PASSWORD_LENGTH ];
	byte currentIndex;  
	
	
private:
	char* target;
	
};

#endif

/*

