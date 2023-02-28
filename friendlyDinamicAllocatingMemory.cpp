#include <iostream>



class baseDMA {

	private:
		char * label;
		int   rating;

	public:
		baseDMA (const char * l = "null", int r = 0);
		baseDMA (const baseDMA & rs);
		virtual ~baseDMA ();
		baseDMA & operator= (const baseDMA & rs);
		friend std:: ostream & operator<< (std:: ostream & os, const baseDMA & rs);
};


class lacksDMA : public baseDMA {

	private:
		enum {COL_LEN = 40};
		char color[COL_LEN];

	public:
		lacksDMA (const char * c = "blank", const char * l = "null", int r = 0);
		lacksDMA (const char * c, const baseDMA & rs);
		friend std:: ostream & operator<< (std:: ostream & os, const lacksDMA & rs);
};


class hasDMA : public baseDMA {

	private:
		char * style;

	public:
		hasDMA (const char * s = "none", const char * l = "null", int r = 0);
		hasDMA (const char * s, const baseDMA & rs);
		hasDMA (const hasDMA & hs);
		~hasDMA ();
		hasDMA & operator= (const hasDMA & rs);
		friend std:: ostream & operator<< (std:: ostream & os, const hasDMA & hs);
};


int main (void) {




	return 0;
}


baseDMA:: baseDMA (const char * l, int r) {

	label = new char[std:: strlen (l) + 1];
	std:: strcpy (label, l);
	rating = r;
}


baseDMA:: baseDMA (const baseDMA & rs) {

	label = new char[std:: strlen (rs.label) + 1];
	std:: strcpy (label, rs.label);
	rating = rs.rating;
}


baseDMA:: ~baseDMA () {

	delete [] label;
}


baseDMA & baseDMA:: operator= (const baseDMA & rs) { // basedma1 = basedma2; <=> basedma.operator=(basedma2);

	if (this == &rs)	// basedma1 == basedma2
		return * this;  // basedma1 =  basedma1;

	delete [] label;
	label = new char[std:: strlen (rs.label) + 1];
	std:: strcpy (label, rs.label);
	rating = rs.rating;

	return * this;
}


std:: ostream & operator<< (std:: ostream & os, const baseDMA & rs) {

	os << "label: "  << rs.label  << std:: endl;
	os << "rating: " << rs.rating << std:: endl;

	return os;
}


lacksDMA:: lacksDMA (const char * c, const char * l, int r) : baseDMA (l, r) {

	std:: strncpy (color, c, 39);
	color[39] = '\0';
}


lacksDMA:: lacksDMA (const char * c, const baseDMA & rs) : baseDMA (rs) {

	std:: strncpy (color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}


std:: ostream & operator<< (std:: ostream & os, const lacksDMA & ls) {

	os << (const baseDMA &) ls; // приведение к типу (const baseDMA &) чтобы
							    // можно было вызвать operator<< из baseDMA;
	os << "Color: " << ls.color << std:: endl;

	return os;
}


hasDMA:: hasDMA (const char * s, const char * l, int r) : baseDMA (l, r) {

	style = new char[std:: strlen (s) + 1];
	std:: strcpy (style, s);
}


hasDMA:: hasDMA (const char * s, const baseDMA & rs) : baseDMA (rs) {

	style = new char[std:: strlen (s) + 1];
	std:: strcpy (style, s);
}


hasDMA:: hasDMA (const hasDMA & hs) : baseDMA (hs) {

	style = new char[std:: strlen(hs.style) + 1];
	std:: strcpy (style, hs.style);
}


hasDMA:: ~hasDMA () {

	delete [] style;
}


hasDMA & hasDMA:: operator= (const hasDMA & hs) {

	if (this == &hs)
		return * this;

	baseDMA:: operator=(hs);
	delete [] style;
	style = new char[std:: strlen (hs.style) + 1];
	std:: strcpy (style, hs.style);

	return * this;
}


std:: ostream & operator<< (std:: ostream & os, const hasDMA & hs) {

	os << (const baseDMA &) hs;
	os << "style: " << hs.style << std:: endl;

	return os;
}


