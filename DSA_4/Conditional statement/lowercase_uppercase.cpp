#include <iostream> 
using namespace std;

int main ()
{
    char ch;
    cout << "Enter a character:";
    cin >> ch;

    if (ch>='a' && ch<='z')
    {
        cout << "The character is in lowercase." << endl;
    }
    else if (ch>='A' && ch<='Z')
    {
        cout << "The character is in uppercase." << endl;
    }
    else
    {
        cout << "The character is not an alphabet." << endl;
    }
    return 0;
}