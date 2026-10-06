// write a c++ program to check college admission eligibility
// if stream is science and PCM marks> 90, eligible for engineering , else not eligible
// if stream is commerce and accounts marks > 90, eligible for bcom hons
// else choose a suitable course

#include <iostream>
using namespace std;

int main()
{
    string stream;
    int pcm_marks, accounts_marks;

    cout << "Enter your stream (science/commerce): ";
    cin >> stream;

    if (stream == "science")
    {
        cout << "Enter your PCM marks: ";
        cin >> pcm_marks;

        if (pcm_marks > 90)
        {
            cout << "You are eligible for engineering." << endl;
        }
        else
        {
            cout << "You are not eligible for engineering." << endl;
        }
    }
    else if (stream == "commerce")
    {
        cout << "Enter your accounts marks: ";
        cin >> accounts_marks;

        if (accounts_marks > 90)
        {
            cout << "You are eligible for BCom Hons." << endl;
        }
        else
        {
            cout << "You are not eligible for BCom Hons. Please choose a suitable course." << endl;
        }
    }
    else
    {
        cout << "Invalid stream entered. Please enter either 'science' or 'commerce'." << endl;
    }

    return 0;
}