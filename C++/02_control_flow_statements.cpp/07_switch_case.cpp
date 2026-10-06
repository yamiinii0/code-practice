// switch case statement  -->

// A switch case is a control statement used to select one block of code to execute from multiple options, based on the value of a variable or expression.



#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter a number (1-7) to represent the day of the week: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;    // break is used to exit the switch case after executing the matched case.
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }

    return 0;
}


// continue statement is used to skip the current iteration of a loop and move to the next iteration. 