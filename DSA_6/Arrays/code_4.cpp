#include <iostream>
using namespace std;

int main()
{
    int nums[8] = {5, 2, 8, 1, -1, 22, -100, 4};

    int smallest = nums[0];
    int largest = nums[0];

    int smallestindex = 0;
    int largestindex = 0;

    for (int i = 0; i < 8; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
            smallestindex = i;
        }

        if (nums[i] > largest)
        {
            largest = nums[i];
            largestindex = i;
        }

    }

    cout << "Smallest element in the array: " << smallest << endl;
    cout << "Index of smallest element in the array: " << smallestindex << endl;

    cout << "Largest element in the array: " << largest << endl;
    cout << "Index of largest element in the array: " << largestindex << endl;
  

    return 0;
}