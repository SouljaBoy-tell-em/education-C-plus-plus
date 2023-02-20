#include <iostream>
#include <string>


using namespace std;


#define LENGTHNAME 20


class Student {

	private:
		char              name[LENGTHNAME];
		int               age;
		static const char group = 'A';
		int               markMath;
		int               markPhys;
		double            avMark;

	public:
		Student (const char * m_name, int m_age = 0, int m_markMath = 0, int m_markPhys = 0);
		void show () const;
		double avarageMark ();
		Student MAXavarageMark (Student student);
		~Student ();


};


int main (void) {

	Student SashaLekov = Student ("Sasha Lekov", 20, 8, 5);
	Student YungTrappa = Student ("Yung Trappa", 27, 3, 4);

	using std:: cout;
	using std:: endl;
	Student maxAvarageMarkStudent = SashaLekov.MAXavarageMark (YungTrappa);
	maxAvarageMarkStudent.show ();

	
	//SashaLekov.show ();
	//YungTrappa.show ();

	return 0;
}


void Student:: show () const { // const после объявления функции добавлено для того, чтобы 
							   // не изменять класс Student (т.е. данные фиксированы);

	std:: cout << "name: "         << name     << std:: endl;
	std:: cout << "age: "          << age      << std:: endl;
	std:: cout << "group: "        << group    << std:: endl;
	std:: cout << "math mark: "    << markMath << std:: endl;
	std:: cout << "physics mark: " << markPhys << std:: endl;
	std:: cout << "avarage mark: " << avMark   << std:: endl;
}


double Student:: avarageMark () {

	return ((double)(markMath + markPhys)) / 2;
}


Student Student:: MAXavarageMark (Student student) {

	if (student.avMark >= avMark)
		return student;

	return * this; // this - указатель на класс, к которому применяется функция MAXavarageMark;
				   // this = указатель на класс SashaLekov в данном случае;

}


Student:: Student (const char * m_name, int m_age, int m_markMath, int m_markPhys) {

	strcpy (name, m_name);
	age      =      m_age;
	markMath = m_markMath;
	markPhys = m_markPhys;
	avMark   = avarageMark ();
}


Student:: ~Student () {

	std:: cout << "closed: " << name << "." << std:: endl; 
}



