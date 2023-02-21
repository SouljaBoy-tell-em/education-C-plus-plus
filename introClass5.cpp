#include <iostream>


class Time {

	friend std:: ostream & operator<< (std:: ostream & os, const Time & time);

	private:
		int hours;
		int minutes;

	public:
		Time (int m_hours = 0, int m_minutes = 0);
		~Time ();
		void show ();
};


int main (void) {

	Time time = Time ();
	std:: cout << time << "lol" << std:: endl;

	//std:: istream & os = std:: cin;

	return 0;
}


std:: ostream & operator<< (std:: ostream & os, const Time & time) {

	os << "hours: " << time.hours << std:: endl << "minutes: " << time.minutes << std:: endl;

	return os; // возвращаем cout в виде ссылки. Напомню, что если к функция возвращающая ссылку,
			   // может использовать как переменная;
}


Time:: Time (int m_hours, int m_minutes) {

	hours   =   m_hours;
	minutes = m_minutes;
}


Time:: ~Time () {

	std:: cout << "closed." << std:: endl;
}



