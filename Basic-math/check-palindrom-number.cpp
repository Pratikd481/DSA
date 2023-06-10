/**
 * Given an integer, check whether it is a palindrome or not.
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int n)
    {
        int res = 0;

        int curr = n;
        while (curr > 0)
        {
            int digit = curr % 10;
            res = res * 10 + digit;

            curr = curr / 10;
        }
        return res;
    }
    string is_palindrome(int n)
    {
        // Code here.
        // reverse the number
        int newN = reverse(n);

        // check reversed and the number is same or not
        if (newN == n)
        {
            return "Yes";
        }
        else
        {
            return "No";
        }
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
        string ans = ob.is_palindrome(n);
        cout << ans << endl;
    }
    return 0;
}