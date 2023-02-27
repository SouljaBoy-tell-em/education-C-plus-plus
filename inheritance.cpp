#include <iostream>
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wc++11-compat-deprecated-writable-strings"


class Player {

	private:
		char * fname;
		char * lname;
		int      age;

	public:
		Player (char * m_fname = "none", char * m_lname = "none", int m_age = 0);
		Player (const Player & copy);
		~Player ();
		void show ();
};


class PointPlayer : public Player {

	private:
		double rating;

	public:
		PointPlayer (char * m_fname, char * m_lname, int m_age, double m_rating);
		PointPlayer (double m_rating, const Player & copy);
		//void show ();
};


int main (void) {

	/*

	Player player1 = Player ("Yung", "Trappa", 27);
	PointPlayer player2 = PointPlayer ("Alexander", "Zaytsev", 19, 2014);

	player1.show ();
	std:: cout << std:: endl;
	player2.show ();

	*/

	PointPlayer player3 ("Ded", "32.ru", 56, 10000.1);
	Player      player4 ("Yung", "Pretty", 30);


	// указатель или ссылка на базовый класс может обращаться только к методам базового класса.
	// В указатель или ссылку на базовый класс можно поместить как базовый класс так и производный.

	// указатель или ссылка на происзводный класс может обращаться только к методам производного класса.
	// В указатель или ссылку на производный класс можно поместить только производный класс.

	/*

	Player & link = player3;
	link.show ();

	Player * pt   = &player3;
	pt->show ();

	PointPlayer * pt = &player3;
	pt->show ();

	*/

	

	return 0;
}


Player:: Player (const Player & copy) {

	std:: strcpy (fname, copy.fname);
	std:: strcpy (lname, copy.lname);
	age = copy.age;
}


Player:: Player (char * m_fname, char * m_lname, int m_age) {

	fname = (char * ) malloc (sizeof (char) * (std:: strlen (m_fname) + 1));
	lname = (char * ) malloc (sizeof (char) * (std:: strlen (m_lname) + 1));

	std:: strcpy (fname, m_fname);
	std:: strcpy (lname, m_lname);
	age = m_age;
}


Player:: ~Player () {

	std:: cout << fname << " " << lname << " closed." << std:: endl;
}


void Player:: show () {

	std:: cout << "first name: " << fname << std:: endl;
	std:: cout << "last name: "  << lname << std:: endl;
	std:: cout << "age: "        << age   << std:: endl;
}


PointPlayer:: PointPlayer (char * m_fname, char * m_lname, int m_age, double m_rating) : Player (m_fname, m_lname, m_age) {

	rating = m_rating;
}


PointPlayer:: PointPlayer (double m_rating, const Player & copy) : Player (copy) {

	rating = m_rating;
}


/* АЛЬТЕРНАТИВНЫЙ ВАРИАНТ:

PointPlayer:: PointPlayer (double m_rating, const Player & copy) : Player (copy), rating (m_rating) {
	
}

*/


/*

void PointPlayer:: show () {

	Player:: show (); // если 2 класса имеют функцию, имеющую одно и то же имя - нужно указать явно через ::
					  // к какому классу она относится;

	std:: cout << "rating: " << rating << std:: endl;
}

*/

