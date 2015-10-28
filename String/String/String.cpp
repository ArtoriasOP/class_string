#include "String.h"


String::String()
{
	str = NULL;
	capacity = NULL;
};


#include "String.h"
#include <iostream>


using namespace std;


String::String()
{
	str = NULL;
	capacity = 0;
}

String::String(char* string)
{
	String* new_str = new String;
	new_str->str = string;
}

String::String(uint Kappa)
{
	String* new_Kappa = new String;
	new_Kappa->capacity = capacity;
}

String::String(String& new_string)
{
	str = new_string.str;
	capacity = new_string.capacity;
}


String::~String()
{
	if (str != NULL)
		delete str;
}


char* String::c_str()
{
	return str;
}


bool String::operator==(const String& new_string) const
{
	return strcmp(new_string.str, str) == 0;
}

bool String::operator!=(const String& new_string)const
{
	return strcmp(new_string.str, str) != 0;
}