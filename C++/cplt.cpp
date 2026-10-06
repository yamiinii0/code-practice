// << ------ insertion
// >> ------ extraction

// cascading ------ In C++, cascading refers to chaining multiple operations or function calls together in a single statement, typically using operator overloading or returning *this from member functions. This allows expressions like obj.setX(10).setY(20).setZ(30); or cout << a << b << c; to work seamlessly.

// Tokens - smallest element....ex: keywords, constants etc

// #include <iostream>
// using namespace std;

// int main()
// {

//     // Data structure definition
//     int principle; // principle amount
//     int time;      // time in years
//     int rate;      // rate of interest
//     int SimpInt;   // simple interest
//     int total;     // total amount to be paid back after 'time' years

//     // read all the data required to compute simple ineterest

//     cout << "Enter principle's amount: ";
//     cin >> principle;

//     cout << "Enter time (in years): ";
//     cin >> time;

//     cout << "Enter rate in interest: ";
//     cin >> rate;

//     // Compute simple ineterest and display the result

//     SimpInt = (principle * time * rate) / 100;
//     cout << "Simple Interest = ";
//     cout << SimpInt;

//     // Total amount = principle amount + simple interest

//     total = principle + SimpInt;
//     cout << "\nTotal Amount = ";
//     cout << total;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     float radius, area;
//     const float PI = 3.14;

//     cout << "Enter radius: ";
//     cin >> radius;

//     area = PI * radius * radius;

//     cout << "Area of circle = " << area;

//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;

// // function to display string
// void display(char str[]) {
//     cout << str;
// }

// int main() {
//     char string[15];

//     // copy string
//     strcpy(string, "Hello world");

//     // function call
//     display(string);

//     cout << endl << string;

//     return 0;
// }

// global variable local variable

// 28.01.2025
// Dynamic binding ----> Binding refers to the linking of a procedure call to the code to be executed in response to the call.
// also knows as late binding.

// Message passing ---> An object oriented program consists of a set of objects that communicate with each other.  objects k beech batcheet...

// Benefits of OOP ~!
// Objects oriented languages ! --- not in syllabus but check it.
// Applications of OOP ! ---------------> 1)real time systems, Simulation and modeling, Object oriented databases, Hypertext hypermedia and expert text, AI and expert systems, Neutral networks and parallel programming etc

// Manipulator : output screen par format karane ka kaam karte hai
//  endl : bina header file k kaam me le sakte ho and ye iostream k andar hi aata hai .

// pointer ko easy krne k liye naya variable introduce kara diya which is reference variable jo address pe kaam kar sake.
//  reference ka dusra naam = alias

// data types and reference variable = value variable
// ex:

// #include <iostream>
// using namespace std;

// int main(){

//     int a = 1, b = 2, c = 3;
//     int &z = a;

//     cout << a << endl << b << endl << c << endl << z << endl;

//     z = b;
//     cout << a << endl << b << endl << c << endl << z << endl;

//     z = c;
//     cout << a << endl << b << endl << c << endl << z << endl;

//     return 0;
// }

// Call by reference --------->

// #include <iostream>
// using namespace std;

// void swap(int &a, int &b)
// {

//     int t;
//     t = a;
//     a = b;
//     b = t;
// }

// int main()
// {

//     int a, b;

//     cin >> a;
//     cin >> b;
//     cout << "Before swap : a = " << a << ", b = " << b << endl;
//     swap(a, b); // passing variales by call by reference
//     cout << "After swap : a = " << a << ", b = " << b << endl;

//      return 0;
// }

// #include <iostream>
// using namespace std;

// void swap(char &a, char &b)
// {

//     int t;
//     t = a;
//     a = b;
//     b = t;
// }

// int main()
// {

//     char a, b;

//     cin >> a;
//     cin >> b;
//     cout << "Before swap : a = " << a << ", b = " << b << endl;
//     swap(a, b); // passing variales by call by reference
//     cout << "After swap : a = " << a << ", b = " << b << endl;

//      return 0;
// }

// #include <iostream>
// using namespace std;

// void swap(float &a, float &b)
// {

//     float t;
//     t = a;
//     a = b;
//     b = t;
// }

// int main()
// {

//     float a, b;

//     cin >> a;
//     cin >> b;
//     cout << "Before swap : a = " << a << ", b = " << b << endl;
//     swap(a, b); // passing variales by call by reference
//     cout << "After swap : a = " << a << ", b = " << b << endl;

//      return 0;
// }

// function overloading

// #include <iostream>
// using namespace std;

// void swapInt(int &a, int &b)
// {
//     int t = a;
//     a = b;
//     b = t;
// }

// void swapChar(char &x, char &y)
// {
//     char t = x;
//     x = y;
//     y = t;
// }

// void swapFloat(float &p, float &q)
// {
//     float t = p;
//     p = q;
//     q = t;
// }

// int main()
// {
//     int a = 10, b = 20;
//     char c1 = 'A', c2 = 'B';
//     float f1 = 1.5, f2 = 2.5;

//     cout << "Before swapping:\n";
//     cout << "Integers: " << a << " " << b << endl;
//     cout << "Characters: " << c1 << " " << c2 << endl;
//     cout << "Floats: " << f1 << " " << f2 << endl;

//     swapInt(a, b);
//     swapChar(c1, c2);
//     swapFloat(f1, f2);

//     cout << "\nAfter swapping:\n";
//     cout << "Integers: " << a << " " << b << endl;
//     cout << "Characters: " << c1 << " " << c2 << endl;
//     cout << "Floats: " << f1 << " " << f2 << endl;

//     return 0;
// }

// DOING IT AGAIN ----------------------->
// #include <iostream>
// using namespace std;

// void swapInt(int &a, int &b)
// {
//     int t = a;
//     a = b;
//     b = t;
// }

// void swapChar(char &a, char &b)
// {
//     char t = a;
//     a = b;
//     b = t;
// }

// void swapFloat(float &a, float &b)
// {
//     float t = a;
//     a = b;
//     b = t;
// }

// int main()
// {

//     int a, b;
//     cin >> a >> b;
//     swap(a, b);
//     cout << a <<" "  << b;

//     char c, d;
//     cin >> c >> d;
//     swap(c, d);
//     cout << c <<" "  << d;

//     float e, f;
//     cin >> e >> f;
//     swap(e, f);
//     cout << e <<" " << f;

// }

// #include <iostream>
// using namespace std;

// // Function to print integer values

// void printInt(int a, int b)
// {
//     cout << "Integer values: " << a << " and " << b << endl;
// }

// // Function to print character values

// void printChar(char c, char d)
// {
//     cout << "Character values: " << c << " and " << d << endl;
// }

// // Function to print float values

// void printFloat(float e, float f)
// {
//     cout << "Float values: " << e << " and " << f << endl;
// }

// int main()
// {

//     int a = 21, b = 12;
//     char c = 'B', d = 'A';
//     float e = 23.2f, f = 45.4f;

//     printInt(a, b);
//     printChar(c, d);
//     printFloat(e, f);

//     return 0;
// }

// // polymorphism ka example hai function overloading.......

// // Inline function : An inline function is a function that requests the compiler to replace the function call with the actual function code at compile time.
// // 👉 This helps in reducing function call overhead and makes the program faster for small functions.

// // to add 2 function first add 2 int then add 3 int

// #include <iostream>
// using namespace std;

// // Function to add 2 integers (call by reference)
// void add(int &a, int &b, int &result)
// {
//     result = a + b;
// }

// // Function to add 3 integers (call by reference)
// void add(int &a, int &b, int &c, int &result)
// {
//     result = a + b + c;
// }

// int main()
// {

//     int x = 10, y = 20, z = 30;
//     int sum;

//     add(x, y, sum);
//     cout << "Sum of 2 integers: " << sum << endl;

//     add(x, y, z, sum);
//     cout << "Sum of 3 integers: " << sum << endl;

//     return 0;
// }

// Doing it again
// #include <iostream>
// using namespace std;

// void add(int &a, int &b, int &result){
//     result = a + b;
// }

// int main(){

//     int x = 20, y = 10;
//     int sum;
//     add(x, y, sum);
//     cout << "The sum of two given integers : " << sum << endl;

// }

// // INLINE FUNCTION :
// #include <iostream>
// using namespace std;

// inline int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     int x = 10, y = 20;
//     cout << "Sum is: " << add(x, y) << endl;
//     return 0;
// }

// identifiers and keywords --- > ex esm, template, delete, catch....
// variables ka naam is identifier
// String bhi constant ho sakti hai
//  data types - user defined built in type and derived type
// user defined - structure, union, class, enumeration
//  derived - arrays, function, reference, pointers.
//  signed, unsigned, long, short data type

// what is generic pointer ? --A generic pointer is a pointer that can store the address of a variable of any data type.
// In C/C++, this is done using a void pointer.
// ex : void *ptr; int *ip ; gp = ip;

// class k variables ----- objects and there type is class name.
// 🔹 Symbolic Constants in C++
//  📌 Definition

// Symbolic constants are names given to constant values that do not change during program execution.
// They make programs more readable, maintainable, and error-free.

// Dynamic initialisation : used in OOPS!   Dynamic initialization means initializing a variable at run time using values entered by the user or calculated during program execution.

// ex program : #include <iostream>
//  using namespace std;

// int main()
// {
//     int a, b, sum;

//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     sum = a + b;   // dynamic initialization

//     cout << "Sum = " << sum;

//     return 0;
// }

// malloc()
// malloc (memory allocation) is a function used to dynamically allocate a block of memory at runtime.

// It allocates the specified number of bytes.

// The allocated memory contains garbage (uninitialized) values.

// Syntax:

// ptr = (datatype*) malloc(size_in_bytes);

// calloc()

// calloc (contiguous allocation) is a function used to dynamically allocate memory for multiple elements.

// It allocates memory for n elements of the same size.

// The allocated memory is initialized to zero.

// Syntax:

// ptr = (datatype*) calloc(n, size_of_each_element);

// In dono ka kaam new or delete krenge cpp me.

// Key Difference (exam point)

// malloc() allocates uninitialized memory
// calloc() allocates zero-initialized memory

// structure programs---------------->

// Functions as a Part of Structure (C++)

// In C++, a structure can contain functions along with data members.
// These functions are called member functions of the structure.

// 👉 When functions are included inside a structure, they can directly access the data members of that structure.

// This concept is similar to classes, the only difference is:
// In a structure, members are public by default
// In a class, members are private by default

// ----> Why Use Functions Inside a Structure?
// To operate on the data of the structure
// To keep data and its operations together
// Makes the program more organized and readable

// #include <iostream>
// using namespace std;

// struct student
// {
//     int age;
//     int rollno;

//     void ask()
//     {
//         cin >> age >> rollno;
//     }
// };

// int main()
// {
//     student s[10];
//     cout << "input details";

//     for (int i = 1; i < 10; i++)
//     {
//         s[i].ask();
//     }

//     cout << "output details = ";

//     for (int i = 1; i < 10; i++)
//     {
//         cout << s[i].age << " " <<  s[i].rollno << endl;
//     }
//     return 0;
// }

// #2 program for structure :

// Displaying birthdate of the authors :

// #include <iostream>
// using namespace std;

// struct date
// { // specifies a structure
//     int day;
//     int month;
//     int year;
// };

// int main()
// {

//     date d1 = {26, 3, 1958};
//     date d2 = {14, 4, 1971};
//     date d3 = {1, 9, 1973};
//     cout << "Birth date of the First Author: ";
//     cout << d1.day << "-" << d1.month << "-" << d1.year << endl;
//     cout << "Birth date of the Second Author: ";
//     cout << d2.day << "-" << d2.month << "-" << d2.year << endl;
//     cout << "Birth date of the Third Author: ";
//     cout << d3.day << "-" << d3.month << "-" << d3.year << endl;

//     return 0;
// }

// three types : string() , list[] and dictionary{}

// using function call

// #include <iostream>
// using namespace std;

// struct date
// {
//     int day;
//     int month;
//     int year;

//     void show()
//     {
//         cout << day << "-" << month << "-" << year << endl;
//     }
// };

// int main()
// {

//     date d1 = {26, 3, 1958};
//     date d2 = {14, 4, 1971};
//     date d3 = {1, 9, 1973};
//     cout << "Birth date of the First Author: ";
//     d1.show();
//     cout << "Birth date of the Second Author: ";
//     d2.show();
//     cout << "Birth date of the Third Author: ";
//     d3.show();

//     return 0;
// }

// Template problem :

// #include <iostream>
// using namespace std;

// template <class T>

// void swapZ(T & x, T & y) // by reference
// {
//     T t; // temporary used in swapping, template variable
//     t = x;
//     x = y;
//     y = t;

// }

// int main(){
//     char ch1, ch2;
//     cout << "Enter two characters <ch1, ch2>: ";
//     cin >> ch1 >> ch2;
//     swap(ch1, ch2); //compiler creates and calls swap (char &a, char &b);
//     cout << "On swapping <ch1, ch2>: " <<" " << ch2 << endl;
//     int a, b;

//     cout << "Enter two integers <a,b>: ";
//     cin >> a >> b;
//     swap(a,b); //compiler calls swap (int &a, int &b);

//     cout <<  "On swapping <a,b>: " << a << " " << b << endl;

//     float c, d;
//     cout << "Enter two floats <c, d>: ";

//     cin >> c >> d;
//     swap (c, d); // compiler calls swap ( float &a, &b)

//     cout << "On swapping <c,d>: " << c << " " << d;

// }

// new and delete operator in cpp

// #include <iostream.h>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter total number of students: ";
//     cin >> num;
//     float *ptr;

//     // memory allocation of num number of floats
//     ptr = new float[num];

//     cout << "Enter GPA of students." << endl;
//     for (int i = 0; i < num; ++i)
//     {
//         cout << "Student" << i + 1 << ": ";
//         cin >> *(ptr + i);
//     }

//     cout << "\nDisplaying GPA of students." << endl;
//     for (int i = 0; i < num; ++i) {
//         cout << "Student" << i + 1 << " :" << *(ptr + i) << endl;
//     }

//     // ptr memory is released
//     delete [] ptr;

//     return 0;
// }

// private data access from public funtion in cpp

// #include <iostream>
// using namespace std;

// class rectangle {
// private:
//     float length;
//     float breadth;

// public:
//     void get_data() {
//         cout << "Enter length and breadth: ";
//         cin >> length >> breadth;
//     }

//    void show_data(){
//         cout << "Length: " << length << endl;
//         cout << "Breadth: " << breadth << endl;
//    }
//    float area(){
//         return length * breadth;
//    }
// };
//    int main (){
//         rectangle rect;
//         rect.get_data();
//         rect.show_data();
//         cout << "Area: " << rect.area() << endl;
//         return 0;
//    }

//    access outside the class

// #include <iostream>
// using namespace std;

// class rectangle {
// private:
//     float length;
//     float breadth;

// public:
//     void get_data();
//     void show_data();
//     float area();
// };

// void rectangle::get_data() {
//     cout << "Enter length and breadth: ";
//     cin >> length >> breadth;
// }

// void rectangle::show_data() {
//     cout << "Length: " << length << endl;
//     cout << "Breadth: " << breadth << endl;
// }

// float rectangle::area() {
//     return length * breadth;
// }

// int main() {
//     rectangle rect;
//     rect.get_data();
//     rect.show_data();
//     cout << "Area: " << rect.area() << endl;
//     return 0;
// }

// friend function

// #include <iostream>
// using namespace std;

// class base {
//     int Val1, Val2;
//     public:
//     void get()
//     {
//         cout << "enter two values - ";
//         cin >> Val1 >> Val2;
//     }
//     friend float mean (base obj);
// };
//     float mean (base obj)
//     {
//         return float (obj.Val1 + obj.Val2)/2;
//     }

// int main ()
// {

//     base obj;
//     obj.get();
//     cout << "\n mean value is :" << mean(obj);

// }

// #include <iostream>
// using namespace std;

// class Number {
//     int x;

// public:
//     void get() {
//         cout << "Enter a number: ";
//         cin >> x;
//     }

//     friend int findMax(Number a, Number b);
// };

// int findMax(Number a, Number b) {
//     if (a.x > b.x)
//         return a.x;
//     else
//         return b.x;
// }

// int main() {
//     Number n1, n2;

//     n1.get();
//     n2.get();

//     cout << "\n Maximum value is: " << findMax(n1, n2);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Item
// {
// private:
//     int number;
//     float cost;

// public:
//     void getData()
//     {
//         cout << "Enter item number: ";
//         cin >> number;
//         cout << "Enter item cost: ";
//         cin >> cost;
//     }

//     void putData();
// };

// void Item::putData()
// {
//     cout << endl << "Item Number: " << number << endl;
//     cout << "Item Cost: " << cost << endl;
// }

// int main()
// {
//     Item x;
//     x.getData();
//     x.putData();
//     return 0;
// }

// a simple class example -

// #include<iostream>
// using namespace std;

// class item {
//     int number;
//     float cost;

//     public:
//     void getdata (int a, int b);
//     void putdata (void);
// };

// #include <iostream>
// using namespace std;

// class Test
// {
// private:
//     int x, y;

// public:
//     Test();        // default constructor
//     void show();   // member function
// };

// // constructor definition
// Test::Test()
// {
//     x = 5;
//     y = 10;
// }

// // member function definition
// void Test::show()
// {
//     cout << "x = " << x << endl;
//     cout << "y = " << y << endl;
// }

// int main()
// {
//     Test t;    // constructor is called automatically
//     t.show();  // display values
//     return 0;
// }

// operator overloading (unary with minus)

// #include <iostream>
// using namespace std;

// class number
// {
//    private :
//    int x;

//    public:
//    number()
//    {
//     x = 0;
//    }
//    number (int n)
//    {
//     x = n;
//    }
//    void operator-()
//    {
//     x = -x;
//    }
//    void show_data()
//    {
//     cout<<"\n x="<< x;
//    }
// };

// int main()
// {
//     number N(8);
//     N.show_data();
//     -N;     // invoke operator over loading function
//     N.show_data();
// }

// program for unary increment or decrement operator overloading

// #include <iostream>
// using namespace std;

// class complex{
//     int a , b ;

//     public:

//     complex(){

//     }
//     void getvalue()
//     {
//         cout << "enter two numbers: ";
//         cin >> a >> b;
//     }
//     void operator++()
//     {
//          ++a;
//          ++b;
//     }

//      void operator--()
//     {
//          --a;
//          --b;
//     }

//     void display()
//     {
//         cout << a << "+"<< b <<"i"<< endl;
//     }
// };

// int main(){
//     complex obj;

//     obj.getvalue();

//     ++obj;
//     cout << "increment complex no.\n";
//     obj.display();

//     --obj;
//     cout << "Decrement complex no.\n";
//     obj.display();

//     return 0;

// }

// unary operator overloading of adding 2 no.s

// #include <iostream>
// using namespace std;

// class Sum {
//     int num1, num2;

// public:
//     // Constructor to set the two numbers
//     Sum(int a, int b) {
//         num1 = a;
//         num2 = b;
//     }

//     // Overloading the unary '+' operator
//     int operator+() {
//         return num1 + num2;
//     }
// };

// int main() {
//     // Create one object containing the numbers 10 and 20
//     Sum myObject(10, 20);

//     // Use the overloaded unary '+' to get the result
//     int result = +myObject;

//     cout << "The sum is: " << result << endl;

//     return 0;

// }

// binary operator overloading with friend function

// #include <iostream>
// using namespace std;

// class Complex
// {
//     float x;
//     float y;

// public:
//     Complex() { }
//         Complex(float real, float imag)
//         { x = real;
//           y = imag;
//         }
//         Complex operator+(Complex);
//         void display(void);
// };

// Complex Complex::operator+(Complex c)
// {
//     Complex temp;
//     temp.x = x + c.x;
//     temp.y = y + c.y;
//     return temp;
// }

// void Complex :: display(void)
// {
//     cout << x << " +  j" << y << "\n";
// }

// int main()
// {
//     Complex c1(3.0, 4.0), c2(5.0, 6.0), c3;
//     c3 = c1 + c2; // c3 = c1.operator+(c2);
//     cout << "c1 = ";
//     c1.display();
//     cout << "c2 = ";
//     c2.display();
//     cout << "c1 + c2 = ";
//     c3.display();
//     return 0;
// }

// payroll system --> simple program for single inheritance example

// #include <iostream>
// using namespace std;

// class emp
// {
// public:
//     int eno;
//     char name[20], des[20];

//     void get()
//     {
//         cout << "enter the employee number, name and designation: ";
//         cin >> eno >> name >> des;
//     }
// };

// class salary : public emp
// {
// public:
//     float bp, hra, da, pf, np;

// public:
//     void get1()
//     {
//         cout << "Enter the basic pay:";
//         cin >> bp;
//         cout << "Enter the HRA: ";
//         cin >> hra;
//         cout << "Enter the DA: ";
//         cin >> da;
//         cout << "Enter the PF: ";
//         cin >> pf;
//     }

//     void calculate()
//     {
//         np = bp + hra + da - pf;
//     }

//     void display()
//     {
//         cout << eno << "\t" << name << "\t" << des << "\t" << bp << "\t" << hra << "\t" << da << "\t" << pf << "\t" << np << "\n";
//     }
// };

// int main()
// {
//     int i, n;
//     char ch;
//     salary s[10];
//     cout << "Enter the number of employee:";
//     cin >> n;

//     for (i = 0; i < n; i++)
//     {
//         s[i].get();
//         s[i].get1();
//         s[i].calculate();
//     }

//     cout << "Emp No.\tName\tDesignation\tBP\tHRA\tDA\tPF\tNet Pay\n";
//     for (i = 0; i < n; i++)
//     {
//         s[i].display();
//     }

//     return 0;
// }

// multiple inheritance --->

// #include <iostream>
// using namespace std;

// class student
// {
// protected:
//     int rno, m1, m2;

// public:
//     void get()
//     {
//         cout << "Enter the Roll no :";
//         cin >> rno;
//         cout << "Enter the two marks   :";
//         cin >> m1 >> m2;
//     }
// };

// class sports
// {
// protected:
//     int sm; // sm = Sports mark
// public:
//     void getsm()
//     {
//         cout << "\nEnter the sports mark :";
//         cin >> sm;
//     }
// };

// class statement : public student, public sports
// {
//     int tot, avg;

// public:
//     void display()
//     {
//         tot = (m1 + m2 + sm);
//         avg = tot / 3;
//         cout << "\n\n\tRoll No    : " << rno << "\n\tTotal      : " << tot;
//         cout << "\n\tAverage    : " << avg;
//     }
// };

// int main()
// {

//     statement obj;
//     obj.get();
//     obj.getsm();
//     obj.display();
// }





// #include <iostream>
// using namespace std;

// class Base {
// public:
//     virtual void show() {
//         cout << "This is Base class show function" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void show() {
//         cout << "This is Derived class show function" << endl;
//     }
// };

// int main() {
//     Base* ptr;
//     Derived obj;

//     ptr = &obj;
//     ptr->show();   // Calls Derived function due to virtual keyword

//     return 0;
// }





// #include <iostream>
// using namespace std;

// class Base {
// public:
//     void show() {
//         cout << "This is Base class show function" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void show() {   // Overriding
//         cout << "This is Derived class show function" << endl;
//     }
// };

// int main() {
//     Derived obj;
//     obj.show();   // Calls Derived class function

//     return 0;
// }





// #include <iostream>
// using namespace std;

// class Base {
// public:
//     Base() {
//         cout << "Base class constructor called" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     Derived() {
//         cout << "Derived class constructor called" << endl;
//     }
// };

// int main() {
//     Derived obj;   // Object creation
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Base1 {
// public:
//     Base1() {
//         cout << "Base1 constructor called" << endl;
//     }
// };

// class Base2 {
// public:
//     Base2() {
//         cout << "Base2 constructor called" << endl;
//     }
// };

// class Derived : public Base1, public Base2 {
// public:
//     Derived() {
//         cout << "Derived constructor called" << endl;
//     }
// };

// int main() {
//     Derived obj;   // Object creation
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class emp
// {
// public:
//     int eno;
//     char name[20], des[20];

//     void get()
//     {
//         cout << "enter the employee number, name and designation: ";
//         cin >> eno >> name >> des;
//     }
// };

// class salary : public emp
// {
// public:
//     float bp, hra, da, pf, np;

// public:
//     void get1()
//     {
//         cout << "Enter the basic pay:";
//         cin >> bp;
//         cout << "Enter the HRA: ";
//         cin >> hra;
//         cout << "Enter the DA: ";
//         cin >> da;
//         cout << "Enter the PF: ";
//         cin >> pf;
//     }

//     void calculate()
//     {
//         np = bp + hra + da - pf;
//     }


#include<iostream>
using namespace std;    

class time{
    int hours;
    int minutes;
    public:
    void get_time(int h, int m){
        hours = h;
        minutes = m;
    }
    void put_time(){
        cout << "Time is: " << hours << " hours and " << minutes << " minutes." << endl;
    }
};






