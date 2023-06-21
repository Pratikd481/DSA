#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

struct Point
{
    int x, y;
};

bool myCmp(Point p1, Point p2)
{
    return p1.x < p2.x;
};

int main()
{
    int n = 4;
    int arr[] = {10, 20, 5, 7};
    // sort in increasing order
    sort(arr, arr + n);
    for (int el : arr)
    {
        cout << el << " ";
    }
    cout << endl;
    // sort in decreasing order
    sort(arr, arr + n, greater<int>());
    for (int el : arr)
    {
        cout << el << " ";
    }
    cout << endl;

    Point arr2[] = {{3, 10}, {2, 8}, {5, 4}, {10, 9}};
    for (auto point : arr2)
    {
        cout << point.x << " " << point.y << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    // sort custom structure using custom compare function
    sort(arr2, arr2 + n, myCmp);
    for (auto point : arr2)
    {
        cout << point.x << " " << point.y << endl;
    }

    // wrost and average case : O(nlog(n))
    return 0;
}