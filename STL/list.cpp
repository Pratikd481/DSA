#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);

    // the differece between vector and list are list has push_front function
    // we can insert in the begining of a vector also using a insert fucntion but that is costly\
    // list fush_front is less costlier because its implemented using doubly linked list
    ls.push_front(10);
    ls.emplace_front(11);
    // rest function are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
    for (auto item : ls)
    {
        cout << item << " ";
    }
    cout << endl;
    return 0;
}