// A function is a block of code that performs a specific task.
// It can be called multiple times in a program, which helps to avoid code repetition and makes the program more organized and easier to read.

// syntax -->

// return_type function_name(parameter_list)
// {
//     // function body
//     return value; // optional
// }

// return type --> int,float,double,char,string,void etc.
// function name --> any valid identifier
// parameter list --> zero or more parameters separated by commas. Each parameter has a type and a name.

#include <iostream>
using namespace std;

int add(int a, int b)  // formal parameters are a and b of type int
{                 // function definition
    return a + b; // return type is int, function name is add, parameter list is (int a, int b)
}

int main()
{
    int sum = add(5, 10); // calling the function(call by value)  , 5 and 10 are actual parameters
    cout << "The sum is: " << sum << endl;
    return 0;
}

// example 2 -->

#include <iostream>
using namespace std;

void fun1()
{
    cout << "This is function 1" << endl;
}
int main()
{
    fun1();
    return 0;
}