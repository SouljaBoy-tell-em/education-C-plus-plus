#include <iostream>
#include <limits.h> // #include <climits>


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
    std:: cin.clear ();
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

    return 0;

}
