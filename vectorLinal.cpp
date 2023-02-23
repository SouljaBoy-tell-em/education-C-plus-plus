#include <iostream>
#include <cmath>
#include <iomanip>


namespace VECTOR {

	enum Mode {RSC, PSC}; // RECTANGLE SYSTEM COORDS;
						  // POLAR     SYSTEM COORDS;

	class Vector {

		friend Vector operator* (double coefficient, Vector & temp);

		private:
			double      x;
			double      y;
			double module;
			double  angle;
			Mode     mode;

		public:
			Vector (double coord1 = 0, double coord2 = 0, Mode mode = RSC);
			~Vector ();
			Vector operator+ (const Vector & temp);
			Vector operator* (double coefficient);
			void reset (double coord1 = 0, double coord2 = 0, Mode mode = RSC);
			void show ();
	};
}


int main (void) {

	VECTOR:: Vector vector = VECTOR:: Vector (2, 3, VECTOR:: RSC);
	vector.show ();

	VECTOR:: Vector mulVector = vector * 3;
	std:: cout << "mul vector: " << std:: endl;
	mulVector.show ();

	return 0;
}


VECTOR:: Vector VECTOR:: Vector:: operator+ (const VECTOR:: Vector & temp) {

	return VECTOR:: Vector (x + temp.x, y + temp.y);
}


VECTOR:: Vector VECTOR:: Vector:: operator* (double coefficient) {

	return VECTOR:: Vector (x * coefficient, y * coefficient);
}


VECTOR:: Vector VECTOR:: operator* (double coefficient, VECTOR:: Vector & temp) {

	return temp.operator* (coefficient);
}


void VECTOR:: Vector:: reset (double coord1, double coord2, Mode mode) {

	VECTOR:: Vector temp = VECTOR:: Vector (coord1, coord2, mode);
	* this = temp;
}


void VECTOR:: Vector:: show () {

	std:: cout << "mode: ";

	if (mode == PSC)
		std:: cout << "PSC" << std:: endl;

	else
		std:: cout << "RSC" << std:: endl;


	std:: cout << "x: "      <<      x << std:: endl;
	std:: cout << "y: "      <<      y << std:: endl;
	std:: cout << "module: " << module << std:: endl;
	std:: cout << "angle: "  <<  angle << std:: endl;
	std:: cout <<                         std:: endl; 
}


VECTOR:: Vector:: Vector (double coord1, double coord2, Mode mode) {

	if (mode == PSC) {

		module =                coord1;
		angle  =                coord2;
		x      = coord1 * cos (coord2);
		y      = coord1 * sin (coord2);
		mode   =                   PSC;
	}

	else {

		x      =               coord1;
		y      =               coord2;
		module = sqrt (x * x + y * y);
		angle  =         atan (y / x);
		mode   =                  RSC;
	}
}


VECTOR:: Vector:: ~Vector () {

	std:: cout << "closed." << std:: endl;
}
