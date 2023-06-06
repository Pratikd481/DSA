#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;

    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;

    while (!st.empty())
    {
        int item = st.top();
        cout << item << " ";
        st.pop();
    }
    cout << endl;
    cout << st.empty() << endl;

    // rest function same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
    return 0;
}