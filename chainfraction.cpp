#include <iostream>
#include <cstdlib>


class Fraction {

	private:
		long double number;
		long long   accuracy;
		long long   numerator;
		long long   denominator;
		int         numberOfExpansions;
		int convert ();

	public:
		Fraction (long double m_number, long long m_accuracy);
		~Fraction ();
		void expansion (int number, Fraction & fraction);
		void show ();

};	


int main (void) {

	Fraction fraction = Fraction (3.14159265358, 100000000);
	fraction.show ();
	std:: cout << std:: endl;

	fraction.expansion (10, fraction);


	return 0;
}


Fraction:: Fraction (long double m_number, long long m_accuracy) {

	number = m_number;
	accuracy = m_accuracy;
	numerator = (m_number * m_accuracy);
	denominator = m_accuracy;
}


Fraction:: ~Fraction () {

	std:: cout << "Fraction closed." << std:: endl;
}


int Fraction:: convert () {

	long long swap = numerator;
	numerator = denominator;
	denominator = swap;

	int ZPart = (numerator - (numerator % denominator)) / denominator;
	numerator = llabs ((ZPart * denominator) - numerator);

	return ZPart;
}


void Fraction:: expansion (int number, Fraction & fraction) {

	fraction.convert();
	int i = 0;
	for (i = 0; i < number; i++)
		std:: cout << "ZPart: " << fraction.convert() << std:: endl;
}


void Fraction:: show () {

	std:: cout << "number: "               << number             << std:: endl;
	std:: cout << "accuracy: "             << accuracy           << std:: endl;
	std:: cout << "numerator: "            << numerator          << std:: endl;
	std:: cout << "denominator: "          << denominator        << std:: endl;
	std:: cout << "number of expansions: " << numberOfExpansions << std:: endl;
}


