#include <iostream>
#include <cstddef>
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wc++11-compat-deprecated-writable-strings"


class AnalogString {

	private:
		char *     str;
		int        len;
		static int num;

	public:
		AnalogString ();
		AnalogString (char * s);
		AnalogString (const AnalogString & copyObject); // копирование объекта всегда происходит так;
		friend std:: ostream & operator<< (std:: ostream & os, const AnalogString & object);
		~AnalogString ();
		void show ();
};


int AnalogString:: num = 0;


void callme1 (AnalogString object);


int main (void) {

	//AnalogString string1 = AnalogString ("hui");
	//string1.show ();

	//AnalogString string2;
	//string2 = string1;
	//string2.show ();

	/*

	AnalogString string3 = AnalogString ("Yung Treezy Crazy");
	string3.show ();
	AnalogString string2 = string3;
	string2.show ();

	*/

	AnalogString string1 = AnalogString ("Yung Treezy Crazy");

	std:: cout << string1 << std:: endl;



	return 0;
}


void AnalogString:: show () {

	std:: cout << "string: " << str    << std:: endl;
	std:: cout << "length: " << len    << std:: endl;
	std:: cout << "number: " << num    << std:: endl;
	std:: cout <<                         std:: endl;
}


AnalogString:: AnalogString () {

	str = new char [1];
	std:: strcpy (str, "");
	len = 1;
	num++;
}


AnalogString:: AnalogString (char * s) {

	str = new char [std:: strlen (s)];
	std:: strcpy (str, s);
	len = strlen (str);
	num++;
}


AnalogString:: AnalogString (const AnalogString & copyObject) {

	str = new char [std:: strlen (copyObject.str)];
	std:: strcpy (str, copyObject.str);
	len = copyObject.len;
	num++;
}


AnalogString:: ~AnalogString () {

	num--;
	std:: cout << str << " closed." << std:: endl;
	std:: cout << "amount of objects: " << num << std:: endl;

	delete str[]; // освобождение памяти, после вызова деструктора;
}


std:: ostream & operator<< (std:: ostream & os, const AnalogString & object) {

	std:: cout << object.str;

	return os;
}







