/**
Given a positive integer N., The task is to find the value of    \sum_{i=1}^{i=n} F(i)  where function F(i) for the number i be defined as the sum of all divisors of ‘i‘.

Input:
N = 4
Output:
15
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
ans = F(1) + F(2) + F(3) + F(4)
    = 1 + 3 + 4 + 7
    = 15


if you look closely, you will all the number from 1 to N appears in ans (N/i) times;

So,  run a loop from 1 to N and multiply each number with (N/i) and also add previous number sum.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long sumOfDivisors(int N)
    {

        long ans = 0;
        for (int i = 1; i <= N; i++)
        {

            ans = ans + i * (N / i);
        }
        return ans;
    }
};
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        Solution ob;
        long long ans = ob.sumOfDivisors(n);
        cout << ans << endl;
    }
    return 0;
}