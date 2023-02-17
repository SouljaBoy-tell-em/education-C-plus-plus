#include <iostream>
#include <limits.h> // #include <climits>
#include <cstring>
#include <vector>
#include <array>
#include <ctime>
#include <cstdio>   // #include <limits.h>
#include <cctype>   // #include <ctype.h>
#include <fstream>
#include <cstdlib>
#include <fstream>
#include <cmath>


const int LIMIT = 5;


struct fordisplay {

    std:: string name;
    int made;
};


int sum (int n, int ( * arr)[4], int size);
void out (std:: array <double, 4> test);
void out1 (std:: array <double, 4> * test);
double square2 (double x);
inline double square (double x) {return x * x;} // встроенная функция;double deg (double x, int n = 2);
double cubeUsual (double  a);
double cubeLink (double & a);
void display (const fordisplay & structdisplay);
fordisplay & accumulate (fordisplay & target, const fordisplay & source);
void file_it (std:: ostream & os, double fo, const double * fe, int n);
double deg (double x, int n = 2);


template <typename T>
void swap (T & a, T & b);
template <typename T>
void swap (T & a, T & b, int c);


int main () {

    /*

    using namespace std;
    cout << "Come up and C++ me some time.";
    cout << endl;
    cout << "You won't regret it!";

    cin.get (); // окно остаётся открытым, пока не нажата клавиша

    */

    /*

    using std :: cin; // разрешение на использование cin из пространства std;
    using std :: cout; // разрешение на использование cout из пространства std;

    int a;
    cin >> a;
    cout << a;

    */

    /*

    int a;
    std :: cin >> a;  // использование cin из пространства более ущербным способом)))
    std :: cout << a; // также и с cout;

    */

    /*

    using namespace std;
    int n_int = INT_MAX; // присваивание максимального значения типа int;
    short n_short = SHRT_MAX; // присваивание максимального значения типа short;

    //аналогично и для остальных типов

    cout << "max int is: " << n_int << endl;
    cout << "max short is: " << n_short << endl;
    cout << "sizeof int is: " << sizeof (int) << endl;
    cout << "sizeof short is: " << sizeof (short) << endl;

    // sizeof () - узнать вес типа в моей системе;

    */

    /*

    int value (432); // инициализация переменной value значением = 432;
    std:: cout << value << std:: endl;
    value = {228}; // теперь value = 228;
    std:: cout << value << std:: endl;
    int value1 {7}; // value1 = 7;
    std:: cout << value1 << std:: endl;
    int value2 = {}; // value2 = 0;
    std:: cout << value2 << std:: endl;
    int value3 {}; // value3 = 0;
    std:: cout << value3 << std:: endl;

    */

    /*

    using namespace std;

    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex; // манипулятор для изменения основания системы счисления;
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;  // манипулятор для изменения основания системы счисления;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    cout << endl << endl;
    cout << dec << "waist = " << waist << endl << "inseam = " << inseam << endl;

    // hex - 16-чная система счисления;
    // oct - 8-чная система счисления;
    // dec - 10-чная система счисления;
    // если будет введено, например,  cout << hex; то все последующие числа
    // будут выводиться в 16-чной системе счисления;

    */

    /*

    char ch;
    std:: cin >> ch;
    std:: cout << "symbol: " << ch << std:: endl;
    std:: cout << "cout.put () symbol: ";
    std:: cout.put (ch);

    */

    /*

    using namespace std;
    cout << "\aOperation \"Hyperhype\" is now activated!\n";
    cout << "Enter your agent code:__________\b\b\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with plan z3!\n";

    */

    /*

    int k\u00F6rper = 23; // равносильно: int korper = 23;
                          // \u00F6 - код символа 'o';

    std:: cout << "k\u00F6rper: "  << k\u00F6rper << std:: endl;

    */

    /*

    wchar_t bob = L'P'; // wchar_t - тип для самого большого набора символов в системе;
                        // 2-хбайтный целочисленный тип;

    std:: wcout << bob << std:: endl;
    std:: cout << sizeof (wchar_t) << std:: endl;

    */

    /*

    using namespace std;
    char16_t ch16 = u'q';
    char32_t ch32 = U'/U0000222B';
    cout << "16: " << ch16 << endl;

    */

    /*

    bool start = -228; // start = true;
    bool end = 0;      // end = false;

    */


    /*

    using namespace std;
    float hats, heads;

    cout.setf (ios_base::fixed, ios_base::floatfield); // формат с фиксированной точкой (по дефолту это 6 знаков после точки);
    cout << "Enter hats: ";
    cin >> hats;
    cout << "\nEnter heads: ";
    cin >> heads;
    cout << "\nSum: " << hats + heads;

    // => когда нужна более высокая точность, то используем double, long double;

    */


    /*

    using namespace std;
    const int code = 66;
    int x = 66;
    char c1 = {66}; // можно присвоить константное выражение;
    char c2 = {code}; // аналогично;
    char c3 = {54522};  // выход за пределы типа char. Сужение не разрешено;
    char c4 = {x}; // так делать не желательно, т.к. x != const;
    char c5 = x; // так делать можно;
    cout << c1 << " " << c2 << " " << c3 << " " << c4;

    */
 

    /*

    // ПРИВЕДЕНИЕ ТИПОВ (пример):

    using namespace std;
    int a = 44;
    cout.setf (ios_base::fixed, ios_base::floatfield);
    cout << "(double) a = " << (double) a << endl << "a (double) = " << double (a);

    */


    /*

    using namespace std;
    char ch = 'Z';
    cout << static_cast<int>(ch) << endl; //получение кода символа 'Z' при помощи static_cast<...>(...);

    */


    // Назначение такого типа, которым инициализируется переменная (auto);
    //auto n = 100; // т.е. n - это переменная, хранящая целочисленный тип;
    //auto x = 1.5; // т.е. x - это переменная, хранящая тип double;


    /*

    // МАССИВЫ:
    int arr [10] = {1}; // первый элемент массива arr[0] = 1; остальные - нулевые;
    double earnings[4] {1.2, 2.3, -2.7, 0.8}; // так можно инициализировать в С++11;
    int counts [10] = {}; // установка всех элементов в 0;
    float balances [100] {}; //аналогично: все элементы в 0, кроме первого;

    // ИНИЦИАЛИЗАЦИЯ СТРОК:
    char dog [4] = {'l', 'o', 'l', '\0'};
    char bird [11] = "Mr.Cheeps"; // наличие \0 подразумевается;
    char fish [] = "Bubbles"; //позволяет компилятору посчитать количество символов;

    */

    /* //КОНКАТЕНАЦИЯ СТРОК:
    using namespace std;
    cout << "I'd give my right arm to be" " a great violinist.\n";
    cout << "I'd give my right arm to be a great violinist.\n";
    cout << "I'd give my right arm to be" 
            " a great violinist.\n";

    */


    /*

    char name[20];
    std:: cin.getline (name, 20);   // считывает строку, отбрасывая \n и меняя его на \0
    std:: cout << name;

    */

    /*

    using namespace std;
    char word1[20];
    char word2[20];
    cin.get (word1, 20);    // когда cin.get(..., ...); достигает \n он завершает строку и оставляет \n в потоке;
    cin.get ();             // cin.get () получает \n; 
    cin.get (word2, 20);    // cin.get (..., ...); получает вторую строку;

    cout << word1 << word2;

    */

    /*

    char word1[20];
    char word2[20];
    std:: cin.getline (word1, 20).getline (word2, 20); // конкатенация двух функций;
    std:: cout << word1 << std:: endl << word2;

    */

    /*

    char word[20];
    std:: cin.get (word, 20);
    std:: cin.clear (); // восстанавливает поток, если что-
    std:: cout << word;

    */

    /*

    // string в отличие от символьного элемента является простой переменной;
    std:: string str;   // string - аналог массива в Си;
    std:: cin >> str;   // ввод до первого пробела. Эквивалиентно scanf ("%s", str);
    std:: cout << str << " symb #2: " << str[1];
    // когда мы создаем строку str, то изначально она нулевой длины. По мере ввода она расширяется до массива символов некоторой длины;
    // string - единая сущность, представляющая строку;

    */

    /*

    using namespace std;
    string str1; // str1 - изначально является пустым объектом;
    string str2 = "Hello, world!";
    string str3;
    cout << "before: " << str1 << endl;
    str1 = str2; // разрешается присваивание;
    cout << "after: "  << str2 << endl;
    str3 = str1 + str2; // конкатенация двух строк;
    cout << "str3: "   << str3 << endl;
    str2 += str1; // инкрементация; добавление в конец второй строки первой;
    cout << "str2: "   << str2 << endl;

    int size = str2.size (); // получение длины строки str2;
    cout << size;

    */

    /*

    using namespace std;
    char word[20];
    cin.getline (word, 20); // чтение все строки, включая пробелы;
    cout << word;
    getline (cin, word); // cin может быть аргументом и тогда длина строки не фиксирована;

    */

    /* // присваивание, указатели:

    int * pt;
    pt = (int * )0xb8000000; // присваивать можно только так. pt = 0xb8000000 - равносильно присвоению переменной типа указателя числа int
                             // важно явно указать адрес;
    */

    /*

    int * pt = new int; // динамическое выделение памяти;
    * pt = 812;
    std:: cout << * pt;
    delete pt; // освобождение памяти

    */

    /*

    int * psome = new int [10]; // выделение памяти для переменной psome (массив);

    int i = 0;
    for (i = 0; i < 10; i++)
        psome[i] = i + 1;

    for (i = 0; i < 10; i++)
        std:: cout << psome[i] << std:: endl;

    // обращение к первому элементу массива:

    std:: cout << "1st element is " << * psome  << std:: endl; 
    std:: cout << "1st element is " << psome[0] << std:: endl;

    // обращение не к первому элементу массива, например, к 5-му:

    std:: cout << "5th element is " << * (psome + 4) << std:: endl;
    std:: cout << "5th element is " << psome [4]     << std:: endl;

    delete [] psome; // освобождение памяти выделенной для массива;

    */

    /*

    struct node {

        int a;
        int b;
    };

    node * ps = new node; // выделение памяти под структуру;
    ps->a = 812;
    ps->b = 228;

    std:: cout << "a = " << ps->a << std:: endl << "b = " << ps->b << std:: endl;
    delete ps; // освободили память, выделенную под структуру;

    */

    /*

    vector<int> vi; // создание массива int нулевого размера;
    int n;
    std:: cin >> n;
    vector<double> vd (n); // создание массива double из n элементов;

    */

    /*

    using namespace std;
    array<int, 5> ai; // создание массива типа int на 5 элементов;
    array<double, 4> ad = {1.2, 2.1, 3.43, 4.3}; // создание массива типа double на 4 элемента;

    //int n = 4;
    //array<int, n> arr; // так нельзя. n должно быть явным числом. Вводить с клавы тоже нельзя;

    */

    /*

    std:: vector<int> arr (5);
    arr[-2] = 2014; // так программа не завершится аварийно;
    arr.at(-2) = 812; // аварийной завершение программы; at () делает проверку;
    
    */

    /*

    using namespace std;
    int x = 0;
    cout << "The expression x = 100 has the value ";
    cout << (x = 100) << endl; // присваивание и вывод;
    cout << "Now x = " << x << endl;
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl; // булево выражение;
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;
    cout.setf(ios_base::boolalpha); // после этого средства будет отображение true/false для логических выражений;
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;
    cout << "x = 100 ? ";
    cout << (x == 100) << endl; // если x = 100 - выведется true;

    */

    /*

    using namespace std;
    string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++) {

        cout << word << endl;
        word[0] = ch;
    }

    cout << "After loop ends, word is " << word << endl;

    */

    /*

    using namespace std;
    cout << "Enter the delay time in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock ();

    while (clock () - start < delay);
    cout << "done \a\n";

    */

    /*

    int num[5] = {1, 3, 5, 7, 6};

    for (int x : num)   // цикл for, основанный на диапозоне; Отображает все значения из диапозона массива;
        std:: cout << x << std:: endl;

    // для изменения значений в массиве;
    for (int &x : num)
        x *= 2;

    std:: cout << std:: endl << std:: endl;

    for (int x : num)
        std:: cout << x << std:: endl;

    // можно делать и так: 
    for (int x : {2, 0, 1, 4})
        std:: cout << x << std:: endl;

    */

    /*

    using namespace std;
    char ch = '0';
    int count = 0;
    cin.get (ch);
    while (cin.fail() == false) { // cin.fail () - проверка на EOF; 
                                  // программа будет работать, пока не встретиться конец файла <Ctrl + Z>
        cout << ch;
        count++;
        cin.get (ch);
    }

    cout << "Amount of symbols: " << count;

    */

    /*
    // Аналогия с getchar () и putchar ();
    char ch = 'a';
    std:: cin.get (ch);
    std:: cout.put (ch); // обязательно в качестве параметра put () должен быть тип char;

    */


    /*// ЗАПИСЬ В ФАЙЛ:

    using namespace std;
    ofstream outFile;
    outFile.open ("fish.txt"); // outFile используется для записи в текстовый файл;
    double wt = 812.812;
    outFile << wt; // запись числа в файл fish.txt;
    outFile << endl;
    outFile << "Hello, world!\n";
    outFile.close (); // завершение работы с файлом;

    */

    /*

    using namespace std;
    ofstream outFile;
    outFile.open ("fish.txt");
    double wt = 812.812812;

    // при использовании precision () запись ведется в виде: 8e+0...;
    cout.precision (2); // точность 2 знака после запятой для вывода на экран;
    cout << wt;
    outFile.precision (6); // точность 3 знака после запятой для записи в файл;
    outFile << wt;
    outFile.close ();

    */


    /*// ЧТЕНИЕ ИЗ ФАЙЛА:

    using namespace std;
    ifstream inFile;
    inFile.open ("bowling.txt");

    if (!inFile.is_open()) // проверка на то, удалось ли открыть файл;
        exit (EXIT_FAILURE);

    //double wt = 0;
    //inFile >> wt; // чтение числа из файла;
    //cout << wt;

    //char line[80];
    //inFile.getline (line, 5); // чтение строки из файла;
    //cout << line;

    int intNum = 0;
    inFile >> intNum;


    if (inFile.eof()) // проверка на конец файла;
        cout << "END OF FILE\n";

    if (inFile.fail ()) // прекращения ввода из-за несоответствия типа данных;
        cout << "Other type of data. Error\n";

    cout << intNum;

    */


    //int arr[3][4] = {{}};
    //sum (4, arr, 3);


    /*

    std:: array<double, 4> test;
    test[0] = 2;
    test[1] = 0;
    test[2] = 1;
    test[3] = 4;
    //out (test); // чтобы изменить тип array необходимо передавать указатель на него;
    out1 (&test); // данные в этом случае изменятся, в отличие от верхней функции;

    int i = 0;
    for (i = 0; i < 4; i++)
        std:: cout << test[i] << " ";

    */

    /*

    double x = 2.28;

    double start  = clock ();
    std:: cout << square (x) << std:: endl;
    double finish = clock ();
    std:: cout << "time inline: " << (finish - start) / CLOCKS_PER_SEC << std:: endl;

    std:: cout.precision (5);
    double start1 = clock ();
    std:: cout << square2 (x) << std:: endl;
    double finish1 = clock ();
    std:: cout << "time usual function: " << (finish1 - start1) / CLOCKS_PER_SEC << std:: endl;

    */

    /*

    int rats = 812;
    int & link = rats; // теперь переменную rats можно менять, если менять link;
    link++; // теперь rats = 813;
    int * prats = &rats;
    std:: cout << "rats is " << rats << std:: endl;
    std:: cout << "link is " << link << std:: endl;

    */

    /*

    int rats = 101;
    int * pt = &rats;
    std:: cout << "pt is " << pt << std:: endl;
    int & rodents = * pt; // нельзя создавать ссылку, а после делать присваивание;
                          // ВАЖНО: при создании ссылки сразу осуществить присваивание;
    std:: cout << "rodents is " << rodents << std:: endl;
    int bunnies = 50;
    pt = &bunnies;
    std:: cout << "pt is " << pt << std:: endl;
    std:: cout << "rodents is "  << rodents << std:: endl;

    */

    /*

    using namespace std;

    double x = 3;
    cout << "usual calculation is " << cubeUsual (x) << endl;
    cout << "x = " << x << endl;
    cout << "link calculation is " << cubeLink (x) << endl;
    cout << "x = " << x << endl;

    */

    /*

    double x = 8;
    double z = cubeLink (x);
    std:: cout << z;

    */

    /*

    using namespace std;
    fordisplay structdisplay = {};
    cout << "Info structdisplay:\n";
    cout << "name: " << structdisplay.name << endl;
    cout << "made: " << structdisplay.made << endl << endl;

    display (structdisplay);
    cout << "Info structdisplay:\n";
    cout << "name: " << structdisplay.name << endl;
    cout << "made: " << structdisplay.made << endl;

    */

    /*

    using namespace std;
    fordisplay yung =  {"Yung",     812};
    cout << "name: " << yung.name << endl << "made: " << yung.made << endl;
    fordisplay trappa = {"Trappa", 2014};
    fordisplay empty = {"YT", 3812};
    fordisplay empty1 = accumulate (yung, trappa); // yung = {"YungTrappa", 2826};
    cout << endl;
    cout << "name: " << yung.name << endl << "made: " << yung.made << endl;
    cout << endl;
    cout << "empty1 name: " << empty1.name << endl << "empty1 made: " << empty1.made << endl;
    cout << endl;
    accumulate (yung, empty1) = empty;  // Эквивалиентно: accumulate (yung, empty1); 
                                        //                yung = empty;
    cout << "name: " << yung.name << endl << "made: " << yung.made << endl;
    cout << endl;

    */


    /*

    std:: ofstream fout;
    const char * fn = "ep-data.txt";
    fout.open (fn); // открытие файла;
    double objective = 0;
    std:: cout << "Input focal length of your telescope objective in mm: ";
    std:: cin  >> objective;
    double eps[LIMIT];
    std:: cout << "Input the focal lengths, in mm, of " << LIMIT << " eyepieces\n";

    int i = 0;
    for (i = 0; i < LIMIT; i++) {

        std:: cout << "Eyepiece #" << i + 1 << ": ";
        std:: cin  >> eps[i];
    }

    file_it (fout, objective, eps, LIMIT);
    file_it (std:: cout, objective, eps, LIMIT);
    std:: cout << "Done\n";

    */

    /*// ЗНАЧЕНИЕ В ФУНКЦИИ ПО УМОЛЧАНИЮ: если функции надо передать 1 аргумент, вместо двух заявленных, то
    //                                  можно в ее прототипе прописать аргумент заранее, если мы не хотим
    //                                  передавать второй аргумент функции в процессе выполнения программы;

    double x = 3;
    int degree = 3;
    std:: cout << deg (x); // прототип: double deg (double x, int n = 2);

    */



    /*//TEMPLATE & TYPENAME:

    int a = 4;
    int b = 6;
    std:: cout << "a = " << a << std:: endl << "b = " << b << std:: endl;

    swap (a, b); // сгенерирована функция вида: void swap (int & a, int & b);
    std:: cout << "a = " << a << std:: endl << "b = " << b << std:: endl;

    */


    /*

    int a =   4;
    int b =   6;
    int c = 812;
    std:: cout << "a = " << a << std:: endl << "b = " << b << std:: endl;

    swap (a, b, c); // перегрузка функции
    std:: cout << "a = " << a << std:: endl << "b = " << b << std:: endl;

    */


    
    
    return 0;
}



int sum (int n, int ( * arr)[4], int size) {

    int i = 0, j = 0;
    for (i = 0; i < size; i++)
        for (j = 0; j < n; j++)
            std:: cout << arr[i][j] << std:: endl;

    return 0;
}


void out (std:: array <double, 4> test) {

    test[0] = 3;
    test[1] = 8;
    test[2] = 1;
    test[3] = 2;

    int i = 0;
    for (i = 0; i < 4; i++)
        std:: cout << test[i] << " ";
}


void out1 (std:: array <double, 4> * test) {

    ( * test)[0] = 3;
    ( * test)[1] = 8;
    ( * test)[2] = 1;
    ( * test)[3] = 2;

    int i = 0;
    for (i = 0; i < 4; i++)
        std:: cout << ( * test)[i] << " ";
}


double square2 (double x) {

    return x * x;
}


double deg (double x, int n) {

    return pow (x, n);
}


double cubeUsual (double a) {

    a = a * a * a;

    return a;
}


double cubeLink (double & a) {

    a = a * a * a;

    return a;
}



void display (const fordisplay & structdisplay) {

    //structdisplay.name = "Yung Trappa";
    //structdisplay.made = 812;

    int a = structdisplay.made;
   std:: cout << "a = " << a << std:: endl;
}


fordisplay & accumulate (fordisplay & target, const fordisplay & source)  {

    target.name += source.name;
    target.made += source.made;

    return target; // возвращаем ссылку;
}




void file_it (std:: ostream & os, double fo, const double * fe, int n) {

    std:: ios_base:: fmtflags initial; // создание переменной типа fmtflags;
    initial = os.setf (std:: ios_base:: fixed); // в переменную initial записываем текущие настройки форматирования;
    os.precision (0); // откинуть все значения после точки;
    os << "Focal length of objective: " << fo << " mm\n";
    os.setf (std:: ios_base:: showpoint); // устанавливаем новые настройки форматирования;
    os.precision (1); // 1 знак, после точки;
    os.width (12);    // ширина поля форматирования + выравнивание;
    os << "f.l. eyepiece";
    os.width (15);    // ширина поля форматирования + выравнивание;
    os << "magnification" << std:: endl;

    int i = 0;
    for (i = 0; i < n; i++) {

        os.width (12);
        os << fe[i];
        os.width (15);
        os << int (fo / fe[i] + 0.5) << std:: endl;
    }

    os.setf (initial); // возврат к настройкам в начале функции;
}


template <typename T>
void swap (T & a, T & b) {

    T temp = a;
    a = b;
    b = temp;
}


template <typename T>
void swap (T & a, T & b, int c) {

    a = c;
    b = c;
}





