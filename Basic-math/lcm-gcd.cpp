/**
Given two numbers A and B. The task is to find out their LCM and GCD.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> lcmAndGcd(long long A, long long B)
    {
        // code here
        vector<long long> res;
        long long gcd = 0;

        long long divisor = B;
        long long divident = A;
        long long rem = divident % divisor;
        while (rem != 0)
        {
            rem = divident % divisor;
            divident = divisor;
            divisor = rem;
        }
        gcd = divident;
        // cout << gcd;

        // lcm
        long long lcm = (A * B) / gcd;
        res.push_back(lcm);
        res.push_back(gcd);
        return res;
    }
};

int main()
{
    cout << "Hello world" << endl;
    cout << pow(20, 3);
    return 0;
}