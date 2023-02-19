#include <iostream>
#include <string>


class Human {

	private:
		std:: string name;
		int age;
		int height;
		int weight;

	public:
		Human (std:: string m_name = " ", int m_age = 0, int m_height = 0, int m_weight = 0);
		void show ();
};


int main (void) {


	//Human human; // эквивалиентно: Human human = Human ();
	//Human human = Human ("Alexander", 19, 187, 63); // Human (...) - конструктор, 
													// с переменным числом обязательных 
													// аргументов;
	Human * pthuman = new Human ("Alexander", 19, 187, 63);
	// Human * pthuman = new Human (); - автоматически инициализируется дефолтными переменными;
	pthuman->show (); // работа с классом производится подобно структуре: ( * pthuman).show ();

	return 0;
}


void Human:: show (void) {

	std:: cout << "name: "   << name   << std:: endl;
	std:: cout << "age: "    << age    << std:: endl;
	std:: cout << "height: " << height << std:: endl;
	std:: cout << "weight: " << weight << std:: endl;
}


Human:: Human (std:: string m_name, int m_age, int m_height, int m_weight) { // конструктор;

	name   =   m_name;
	age    =    m_age;
	height = m_height;
	weight = m_weight;
}