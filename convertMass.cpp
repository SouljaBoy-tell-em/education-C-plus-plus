#include <iostream>


class Mass {

	private:
		static const int traid = 14;
		double               pounds;
		double               stouns;
		double              allmass;

	public:
		Mass ();
		Mass (double m_stouns);
		Mass (double m_pounds, double m_stouns = 0);
		~Mass ();
		operator double () const;
		operator int    () const;
		void show ();

};



int main (void) {

	Mass mass = 12.12;


	return 0;
}


Mass:: operator double () const {

	return allmass;
}


Mass:: operator int () const {

	return (int) allmass;
}



Mass:: Mass () {

	pounds  = 0;
	stouns  = 0;
	allmass = 0;
}


Mass:: Mass (double m_stouns) {

	pounds  =        0;
	stouns  = m_stouns;
	allmass = stouns * traid;
}


Mass:: Mass (double m_pounds, double m_stouns) {

	pounds  = m_pounds;
	stouns  = m_stouns;
	allmass = m_pounds + m_stouns * traid; 
}


Mass:: ~Mass () {

	std:: cout << "closed." << std:: endl;
}




