#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<int, int> p = {1, 2};
    
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> nestedPair = {1, {2, 3}};
    cout << nestedPair.first << " " << nestedPair.second.first << " " << nestedPair.second.second << endl;

    // array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 3}};
    cout << arr[0].first << " " << arr[0].second;
}