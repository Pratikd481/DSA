#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long factorial(int i)
    {
        if (i == 1)
        {
            return 1;
        }

        return i * factorial(i - 1);
    }

    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long> res;
        int i = 1;
        long long currFact = factorial(i);
        while (currFact <= N)
        {
            res.push_back(currFact);
            i++;
            currFact = factorial(i);
        }

        return res;
    }
};
int main()
{
    long long N;
    cin >> N;
    Solution ob;
    vector<long long> ans = ob.factorialNumbers(N);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}