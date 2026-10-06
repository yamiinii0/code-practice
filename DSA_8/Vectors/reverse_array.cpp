#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int>& nums)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start < end)
    {
        swap(nums[start], nums[end]);

        start++;
        end--;
    }
}

int main()
{
    vector<int> nums = {4, 2, 7, 8, 1, 2, 5};

    reverseVector(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}