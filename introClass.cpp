#include <iostream>
#include <cstring>


#define LENGTHNAME 20


class Human {

	private:
		char     name[LENGTHNAME];
		int                   age;
		double             salary;
		void set_tot (int a, int b);

	public:
		void startInitialize ();
		void show ();
};


inline void Human:: set_tot (int a, int b) {

	age *= salary;
}


int main (void) {

	Human human;
	human.startInitialize ();
	human.show ();

	return 0;
}



void Human:: startInitialize () {

	strcpy (name, "unnamed");
	age = 0;
	salary = 0.0;
}


inline void Human:: show () {

	std:: cout << "name: "   << name   << std:: endl;
	std:: cout << "age: "    << age    << std:: endl;
	std:: cout << "salary: " << salary << std:: endl;
}