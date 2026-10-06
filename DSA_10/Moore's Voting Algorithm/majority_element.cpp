#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &num)
{
    int n = num.size();  

    for (int val : num)
    {
        int freq = 0;

        for (int el : num)
        {
            if (el == val)
            {
                freq++;
            }
        }

        if (freq > n / 2)
        {
            return val;
        }
    }

    return 0;
}

int main()
{
    vector<int> num = {2, 2, 1, 1, 1, 2, 2};

    cout << majorityElement(num) << endl;

    return 0;
}