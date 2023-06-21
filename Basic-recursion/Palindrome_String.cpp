#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    int isPalindrome(string S)
    {
        // Your code goes here
        int begin = 0, end = S.length() - 1;
        while (begin < end)
        {
            if (S[begin] != S[end])
            {
                return 0;
            }
            begin++;
            end--;
        }
        return 1;
    }

    int isPalindromeRec(string S, int start, int end)
    {
        // Your code goes here
        if (S[start] != S[end])
        {
            return 0;
        }
        if (start <= end)
        {
            if (isPalindromeRec(S, start + 1, end - 1) == 0)
            {
                return 0;
            }
        }
        return 1;
    }
};

int main()
{
    string s;
    cin >> s;
    Solution ob;
    cout << ob.isPalindrome(s) << endl;
    cout << ob.isPalindromeRec(s, 0, s.length() - 1) << endl;
    return 0;
}