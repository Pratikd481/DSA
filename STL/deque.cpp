#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(3);
    dq.push_front(10);
    dq.emplace_front(11);
    for (auto item : dq)
    {
        cout << item << " ";
    }
    cout << endl;
    // we can pop_back and pop_front also
    dq.pop_back();
    for (auto item : dq)
    {
        cout << item << " ";
    }
    cout << endl;
    dq.pop_front();
    for (auto item : dq)
    {
        cout << item << " ";
    }
    cout << endl;

    // rest function same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
    return 0;
}