// function to print all unique values in an array.

#include <iostream>
using namespace std;

void printunique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;

        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 1, 1, 3, 4, 9};
    int size = 10;

    cout << "Unique values";

    printunique(arr, size);

    return 0;
}