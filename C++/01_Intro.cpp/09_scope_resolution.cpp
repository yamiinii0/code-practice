// scope resolution operator --> ::

// ---> The scope resolution operator :: is used to tell the compiler exactly which variable/function we are talking about.
// --->  where is it used ? 
// ---> accessing global variable , defining class functions outside class , accessing static/class members.




// #include <iostream>
// using namespace std;

// int x = 10;   // global variable

// int main(){
//     int x = 5;   // local variable;

//     cout << "local =" << x << endl;
//     cout << "global =" << ::x << endl;

//     return 0;

// }




#include <iostream>
using namespace std;
    
class Student{
    public:
        void show();   // function declaration 
};

void Student::show(){
    cout << "Hello, I am a student." << endl;    // function definition
}
 
int main(){
    Student s;
    s.show();   // calling the function 

    return 0;
}