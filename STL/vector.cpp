#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void printVector(vector<int> &v)
{
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    // Basic vector initializaiton with push_back
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    printVector(v); // 1 2

    // vector initialization with default values
    vector<int> v2(5, 10);
    printVector(v2); // 10 10 10 10 10

    // vector of pairs
    vector<pair<int, int>> pVec;
    pVec.push_back({1, 2});
    pVec.push_back({3, 4});

    //
    return 0;
}