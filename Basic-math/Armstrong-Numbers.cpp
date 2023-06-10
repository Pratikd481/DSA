/**
 *
For a given 3 digit number, find whether it is armstrong number or not. An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. Return "Yes" if it is a armstrong number else return "No".
NOTE: 371 is an Armstrong number since 33 + 73 + 13 = 371
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string armstrongNumber(int n)
    {
        // code here

        // init res= 0
        int res = 0;
        // filter digits
        int curr = n;
        while (curr > 0)
        {
            int digit = curr % 10;
            curr = curr / 10;
            // make cube of the digit and add it to the res
            res += pow(digit, 3);
        }

        // compare res with number
        if (res == n)
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
    cout << "Hello world" << endl;
    cout << pow(20, 3);
    return 0;
}