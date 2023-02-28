#include <iostream>
#include <cstdlib>
#pragma GCC diagnostic ignored "-Wdelete-abstract-non-virtual-dtor"


#define PI 3.14


class Figure {

	protected:
		double x; // coords of centre;
		double y;

	public:
		Figure (double m_x = 0, double m_y = 0);
		~Figure ();
		virtual bool checkPoint (double m_x, double m_y);
		virtual void show () const;
		virtual double square () = 0;
		//virtual void tension (double m_a, double m_b);
};


class Ellipse : public Figure {

	private:
		double a;
		double b;

	public:
		Ellipse (double m_x = 0, double m_y = 0, double m_a = 0, double m_b = 0);
		~Ellipse ();
		virtual void show () const;
		virtual double square ();
};


class Circle : public Figure {

	private:
		double r;

	public:
		Circle (double m_x, double m_y, double m_r);
		~Circle ();
		virtual void show () const;
		virtual double square (); 
};


int main (void) {

	Figure * figure [7];

	double x = 0, y = 0;

	int i = 0, answer = 1;
	for (i = 0; i < 7; i++) {

		std:: cout << "Enter the x: ";
		std:: cin  >> x;
		std:: cout << "Enter the y: ";
		std:: cin  >> y;

		std:: cout << "Press \"1\", if you want create ellipse "
					  "and \"2\", if you want to create circle "
				   <<
		std:: endl;
		std:: cin  >> answer;

		if (answer == 1) {

			double a = 0, b = 0;

			std:: cout << "Enter the A: ";
			std:: cin  >> a;
			std:: cout << "Enter the B: ";
			std:: cin  >> b;

			figure[i] = new Ellipse (x, y, a, b);
			std:: cout << "Ellipse was created. Good. Enter the next parameters: " << std:: endl;
		}

		else if (answer == 2) {

			double r = 0;

			std:: cout << "Enter the radius of circle: ";
			std:: cin  >> r;

			figure[i] = new Circle (x, y, r);
			std:: cout << "Circle was created. Good. Enter the next parameters: " << std:: endl;
		}

	}

	for (i = 0; i < 7; i++)
		delete figure[i];


	return 0;
}


Circle:: Circle (double m_x, double m_y, double m_r) : Figure (m_x, m_y) {

	r = m_r;
}


Circle:: ~Circle () {

	std:: cout << "Circle closed." << std:: endl;
}


Figure:: Figure (double m_x, double m_y) {

	x = m_x;
	y = m_y;
}

Figure:: ~Figure () {

	std:: cout << "Figure closed." << std:: endl;
}


bool Figure:: checkPoint (double m_x, double m_y) {

	return false;
}


Ellipse:: Ellipse (double m_x, double m_y, double m_a, double m_b) : Figure (m_x, m_y) {

	if (m_a == m_b) {

		std:: cout << "You entered parameters for circle. Error." << std:: endl;
		exit (EXIT_FAILURE);
	}

	a = m_a;
	b = m_b;
}


Ellipse:: ~Ellipse () {

	std:: cout << "Ellipse closed." << std:: endl;
}


void Circle:: show () const {

	std:: cout << "CIRCLE: "      << std:: endl;
	Figure:: show ();

	std:: cout << "radius: " << r << std:: endl;
}


void Ellipse:: show () const {

	std:: cout << "ELLIPSE:" << std:: endl;
	Figure:: show ();

	std:: cout << "a: " << a << std:: endl;
	std:: cout << "b: " << b << std:: endl;
}


void Figure:: show () const {

	std:: cout << "x: " << x << std:: endl;
	std:: cout << "y: " << y << std:: endl;
}


double Circle:: square () {

	return PI * r * r;
}


double Ellipse:: square () {

	return PI * a * b;
}

