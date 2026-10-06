// maximum subarray sum - brute force approach

#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    int maxsum = 0;

    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxsum = max(currSum, maxsum);
        }
    }
    cout << "max subarray sum = " << maxsum << endl;
    return 0;
}