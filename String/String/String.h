#ifndef __STRING_H__
#define __STRING_H__

#include <iostream>

typedef unsigned int uint;

class String
{
	char* str;
	uint capacity;

public:

	/*control d memoria
	
	constructor buit, q rebi una cadena i un q rebi capacity i un d copia*/

	String();
	String(char* string);
	String(uint kappa);
	String(String& copy);

	~String();

	//c_str() = get string;
	// operadors == / !=

	char* c_str();

	bool operator==(const String& new_string)const;
	bool operator!=(const String& new_string)const;


};




















#endif