// optimized solution

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int n = nums.size();

    sort(nums.begin(), nums.end()); // sort

    int freq = 1, ans = nums[0]; // freq count
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n / 2)
        {
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> num = {2, 2, 1, 1, 1, 2, 2};

    cout << majorityElement(num) << endl;

    return 0;
}