#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 4};
    cout << vec[2] << endl; // 4
    cout << "size --> " << vec.size() << endl; // 3
    vec.push_back(25); // adds at last
    vec.pop_back();
    
    

    for (int i : vec)
    {
        cout << i << endl;
        cout << vec.back() << endl;
        cout << vec.front() << endl;
        cout << vec.at(0) << endl;
    }
    return 0;
}