// smallest / largest element in an array

#include <iostream>
using namespace std;

int main()
{
    int nums[8] = {5, 2, 8, 1, -1, 22, -100, 4};

    int smallest = nums[0];
    int largest = nums[0];

    for (int i = 0; i < 8; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }

        if (nums[i] > largest)
        {
            largest = nums[i];
        }

    }

    cout << "Smallest element in the array: " << smallest << endl;
    cout << "Largest element in the array: " << largest << endl;
  

    return 0;
}