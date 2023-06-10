#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> q; // after every push or any operation largest values stays at the top  ;
    // by default max heap
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;

    // Minheap implementation where minimum value stays at the top
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    // Time complexity : push and pop log(n)

    return 0;
}