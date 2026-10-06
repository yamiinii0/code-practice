#include <iostream>
using namespace std;

class Complex {
    int a, b;

public:
    void getvalue() {
        cout << "Enter the value of Complex Numbers (a b): ";
        cin >> a >> b;
    }

    Complex operator+(Complex ob) {
        Complex t;
        t.a = a + ob.a;
        t.b = b + ob.b;
        return t;
    }

    Complex operator-(Complex ob) {
        Complex t;
        t.a = a - ob.a;
        t.b = b - ob.b;
        return t;
    }

    void display() {
        cout << a << " + " << b << "i" << endl;
    }
};

int main() {
    Complex obj1, obj2, result, result1;

    obj1.getvalue();
    obj2.getvalue();

    result = obj1 + obj2;
    result1 = obj1 - obj2;

    cout << "\nInput Values:\n";
    obj1.display();
    obj2.display();

    cout << "\nAddition Result: ";
    result.display();

    cout << "Subtraction Result: ";
    result1.display();

    return 0;
}
