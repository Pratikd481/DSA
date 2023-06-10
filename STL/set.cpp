#include <iostream>
#include <set>
using namespace std;

int main()
{
    // set store unique value in sorted order
    set<int> st;
    st.insert(1); // 1
    st.insert(2); // 1 2
    st.insert(2); // 1 2
    st.insert(4); // 1 2 4
    st.insert(3); // 1 2 3 4

    // find function returns an iterator which point to the given value
    // if element is not in the set it will always return st.end()
    auto it = st.find(3);
    cout << *(it) << endl;

    auto it2 = st.find(6);
    if (it2 == st.end())
    {
        cout << "Same as st.end()" << endl;
    }

    // We can pass iterator or the element to the erase function
    // we casn pass start and end iterator also to erase a range
    st.erase(5); // remove 5 from set
    auto it3 = st.find(3);
    st.erase(it3);

    cout << st.count(1); // if 1 exist return 1 or return 0

    return 0;
}