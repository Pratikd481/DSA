/**
 *
Given a number N. Count the number of digits in N which evenly divides N.

Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.
*/
class solution
{
public:
    int evenlyDivides(int N)
    {

        // code here
        int x;
        int count = 0;
        int y = N;

        while (N != 0)
        {
            x = N % 10;
            if (x != 0 && y % x == 0)
            {
                count++;
            }

            N = N / 10;
        }

        return count;
    }
};