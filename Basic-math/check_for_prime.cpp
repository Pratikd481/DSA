#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string is_prime(int n)
    {
        if (n == 1)
        {
            return "No";
        }
        if (n == 2 || n == 3)
        {
            return "Yes";
        }
        if (n == 2 || n == 3)
        {
            return "Yes";
        }
        if (n % 2 == 0 || n % 3 == 0)
        {
            return "No";
        }
        // Code here.
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return "No";
            }
        }

        return "Yes";
    }
};
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        Solution ob;
        string ans = ob.is_prime(n);
        cout << ans << endl;
    }
    return 0;
}