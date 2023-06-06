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
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    printVector(v); // 1 2 3 4 5

    // vector initialization with default values
    vector<int> v2(5, 10);
    printVector(v2); // 10 10 10 10 10

    // vector of pairs
    vector<pair<int, int>> pVec;
    pVec.push_back({1, 2});
    pVec.push_back({3, 4});

    // iterator
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << endl;
    it = it + 2;
    cout << *(it) << endl;

    vector<int>::iterator itn = v.end(); // end() alawys return next address of the last element
    cout << *(itn - 1) << endl;

    // how to access vector elements
    cout << v[0] << " " << v.at(0) << endl;
    cout << v.back() << endl; // back returns last element

    // how to loop through vector
    // using iteraor
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    // using auto
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // using auto
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    // Erase
    v.erase(v.begin() + 1); // erasing a single element
    printVector(v);
    // erasing a range from a start to end
    v.erase(v.begin(), v.begin() + 2);
    printVector(v);

    // how to insert values in a vector
    vector<int> v3(2, 100);
    printVector(v3);
    v3.insert(v3.begin(), 300); // insert in a specific position
    printVector(v3);
    v3.insert(v3.begin(), 2, 500); // insert two 500 in a specific position
    printVector(v3);

    cout << v3.size() << endl;
    v3.pop_back();
    printVector(v3);
    v.swap(v3);
    printVector(v3);
    printVector(v);
    v.clear();
    if (v.empty())
    {
        cout << "v is empty";
    }
    return 0;
}