#include <iostream>


class Time {
	
	friend Time operator* (double coef, Time & time); // дружественные функции не являются
													  // функциями-членами, но при этом они
												      // могут использоваться для изменения 
													  // параметров в классе;
	private:
		int hours;
		int minutes;
		void convert ();
	
	public:
		Time (int m_hours = 0, int m_minutes = 0);
		void Show ();
		Time operator+ (const Time & time);
		Time operator* (double coef);
		~Time ();

};


int main (void) {

	Time time;
	time.Show ();
	std:: cout << std:: endl;

	Time time1 = Time (2, 93);
	Time time2 = Time (3, 44);

	time1.Show ();
	std:: cout << std:: endl;
	time2.Show ();
	std:: cout << std:: endl;


	/*

	time1.operator+ (time2);
	time1.Show ();
	std:: cout << std:: endl;

	*/


	/*

	Time total = time1 + time2; // запись представляет вид: time1.operator+(time2); (равносильная запись)
	total.Show ();
	std:: cout << std:: endl;

	*/

	Time total = time1 * 3;
	std:: cout << "TOTAL: " << std:: endl;
	total.Show ();
	std:: cout << std:: endl;


	return 0;
}


void Time:: convert () {

	hours += (minutes - minutes % 60) / 60;
	minutes %= 60;
}


void Time:: Show () {

	std:: cout << "hours: "   << hours   << std:: endl;
	std:: cout << "minutes: " << minutes << std:: endl;
}


Time Time:: operator+ (const Time & time) {

	hours += time.hours;
	minutes += time.minutes;
	convert ();

	return * this;
}


Time operator* (double coef, Time & time) {

	return time * coef; // time.operator* (coef); ???
}


Time Time:: operator* (double coef) {

	Time currentTime;
	int fullminutes = (hours * 60 + minutes) * coef;
	currentTime.hours = fullminutes / 60;
	currentTime.minutes = fullminutes % 60;

	return currentTime;
}


Time:: Time (int m_hours, int m_minutes) {

	hours  =    m_hours;
	minutes = m_minutes;

	convert ();
}


Time:: ~Time () {

	std:: cout << "closed." << std:: endl;
}







