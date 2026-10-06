// #include <iostream>
// const float PI = 3.1452;

// void main ()
// {
//     float radius;
//     std::cout << "Enter the radius of the circle: ";
//     std::cin >> radius;
//     float area = PI * radius * radius;
//     std::cout << "The area of the circle is: " << area << std::endl;
// }




// //disp.cpp: display message in c++
// #include <stdio.h>
// #include <string.h>
// void display ( const char *msg )
// {
//    cout << msg;
//    /*modify the message */
//    // strcpy ( msg, "Goodbye" ); // This line will cause a compilation error
// }
// void main()
// {
//     char string[15];
//     strcpy( string, "Hello, World!" );
//     display( string );
//     cout << endl << string ;
// }

// //scope resolution operator ::

// #include <iostream.h>
// int num = 20;
// void main()
// {
//     int num = 10;  // local variable
//     cout << "Local num: " << num << endl; // prints local variable
//     cout << "Global num: " << ::num << endl; // prints global variable
// }



// //reference variable (alias)/ alternative names

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a=1, b=2, c=3;

//     int &z = a; // z is a reference to a a
//     cout << "a = " << a << endl << ", b = " << b << ", c = " << c << endl;

//     z = b; // z is now a reference to b
//     cout << "a = " << a << endl << ", b = " << b << ", c = " << c << endl;

//     z = c; // z is now a reference to c
//     cout << "a = " << a << endl << ", b = " << b << ", c = " << c << endl;

//     return 0;
// }



// call by reference

// #include <iostream
// >
// using namespace std;

// void swap (int &x, int &y) // reference variables
// {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }
//    int main()
//     {
//          int a = 10, b = 20;
//          cout << "Before swap: a = " << a << ", b = " << b << endl;
//          swap(a, b); // passing variables by reference
//          cout << "After swap: a = " << a << ", b = " << b << endl;
//          return 0;
//     }



// 31.01.26


//function overloading with call by reference


//  #include <iostream>
//  using namespace std;

//  void swapInt (int &x, int &y) // reference variables
// {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

//  void swapFloat (float &x, float &y) // reference variables
//  {
//      float temp;
//      temp = x;
//      x = y;
//      y = temp;
//  }

//  void swapChar (char &x, char &y) // reference variables
// {
//     char temp;
//     temp = x;
//     x = y;
//     y = temp;
// }
//     int main()
//      {
//         int x = 10, y = 20;
        
//         swapInt(x, y); // passing variables by reference
        
//         char x = 'A', y = 'B';
        
//         swapChar(x, y); // passing variables by reference
        
//           float x = 10.5, y = 20.5;
          
//           swapFloat(x, y); // passing variables by reference
          
//           return 0;
//      }




// #include <iostream>
// using namespace std;


// void swapInt (int &a, int &b) // reference variables
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

//  void swapFloat (float &a, float &b) // reference variables
//  {
//      float temp;
//      temp = a;
//      a = b;
//      b = temp;
//  }

//  void swapChar (char &a, char &b) 
// {
//     char temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     int a , b;
//     cin >> a >> b;
//     swap(a, b); 
//     cout << a << b << endl;

//     char c , d;
//     cin >> c >> d;
//     swap(c, d);
//     cout << c  << d << endl;

//     float e, f;
//     cin >> e >> f;
//     swap(e, f);
//     cout << e << f << endl;
// }
     

// #include <iostream>
// using namespace std;

// void print(int &a) {
//     cout << "Integer" << a << endl;
// }

// void print(float &b) {
//     cout << "Float" << b << endl;
// }

// void print(char &c) {
//     cout << "Character" << c << endl;
// }

// int main ()
// {
//     int a;
//     float b;
//     char c;

//     cout <<"integer = ";
//     cin >> a;

//     cout << "float = ";
//     cin >> b;

//     cout << "character = ";
//     cin >> c;

//     print(a);   
//     print(b);  
//     print(c);  

//     return 0;
// }


// to add function overloading with reference variable 
// first add int then add 3 int


// #include <iostream>
// using namespace std;

// int add (int &a, int &b) {
//     return a + b;
// }
// int add (int &a, int &b, int &c) {
//     return a + b + c;
// }

// int main ()
// {
//     int x, y, z;
//     cout << "Enter two integers: ";
//     cin >> x >> y;
//     cout << "Sum of two integers: " << add(x, y) << endl;

//     cout << "Enter three integers: ";
//     cin >> x >> y >> z;
//     cout << "Sum of three integers: " << add(x, y, z) << endl;

//     return 0;
// }





// inline function 

// #include <iostream>
// using namespace std;

// inline int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     int x, y;
//     cout << "Enter two numbers: ";
//     cin >> x >> y;

//     cout << "Sum = " << add(x, y);
//     return 0;
// }






// 06.02.26

// structure programs

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













// cpp short pdf pg 24


// date2.cpp : displaying birth date of the authors


// #include <iostream>
// using namespace std;

// struct date        // specifies a structure
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

//     cout << "Birth Date of the First Author: ";
//     d1.show();

//     cout << "Birth Date of the Second Author: ";
//     d2.show();

//     cout << "Birth Date of the Third Author: ";
//     d3.show();

//     return 0;
// }




// 07-02-2026




 // generic function for swapping

#include <iostream.h>
using namespace std;

template <class T>

void swapY( T & x, T & y ) // by reference
{
T t; // temporary used in swapping, template variable
t = x;
x = y;
y = t;
}
void main()
{
char ch1, ch2;
cout << "Enter two Characters <ch1, ch2>: ";
cin >> ch1 >> ch2;

swapY ( ch1, ch2 );//compiler creates and calls swapY( char &a, char &b
cout << "On swapping <ch1, ch2>: " << ch1 << " " << ch2 << endl;

int a, b;
cout << "Enter two integers <a, b>: ";
cin >> a >> b;

swapY ( a, b); // compiler creates and calls swapY( int &x, int &y );
cout << "On swapping <a, b>: " << a << " " << b << endl;

float c, d;
cout << "Enter two floats <c, d>: ";
cin >> c >> d;

swapY ( c, d); // compiler creates and calls swapY(float &x, float &
cout << "On swapping <c, d>: " << c << " " << d;
}