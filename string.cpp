#include <iostream>
#include <cstring>
#include <vector>


class Line {

	private:
		char *   data;
		int    length;

	public:
		Line ();
		Line (const char * m_data);
		~Line ();
		void show ();
};


int main (void) {

	//Line line;
	//line = "hello, world!";		

	return 0;
}


Line:: Line () {

	length = 5;
	data = new char [length + 1];
	std:: strcpy (data, "empty");
}


Line:: Line (const char * m_data) {

	length = std:: strlen (m_data);
	data   = new char [length + 1];
	std:: strcpy (data, m_data);
}


Line :: ~Line () {

	std:: cout << "Prorgram the end. \"" << data << "\" closed." << std:: endl;
	delete [] data;
}


void Line:: show () {

	std:: cout << "line length: " << length << std:: endl;
	std:: cout << "line: "        << data   << std:: endl;
}




