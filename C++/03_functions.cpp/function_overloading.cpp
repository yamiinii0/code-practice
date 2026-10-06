// Function overloading means defining multiple functions with the same name but different parameters. 
// The compiler determines which function to call based on the number and types of arguments passed to the function.

#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

double add(double a, double b){
    return a+b;
}


int main()
{
    cout << "The sum of 5 and 10 is: " << add(5, 10) << endl; // calls the first add function
    cout << "The sum of 5.5 and 10.5 is: " << add(5.5, 10.5) << endl; // calls the second add function
    return 0;
}


// simple meaning ek function naam kaam anek baar different parameters ke sath
// also helps in polymorphism, where a single function can work with different types of data.
