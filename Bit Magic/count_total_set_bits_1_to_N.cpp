/* 
    Program to find the total count of set bits for all numbers from 1 to N (both inclusive).

    We need to come up with an efficient solution for large values of N.

    However, in the explanation below, we are taking a small value of N (i.e., 6) for the sake of convenience.

    Solution Explanation
    --------------------

    Let's take N = 6

    1 - 001
    2 - 010
    3 - 011
    4 - 100
    5 - 101
    6 - 110

    Total set bits are 9. How to calculate them via a program?

    The key over here is to understand the powers of 2. With every increasing power of 2, we are making use of
    an extra bit. For instance, 7 -> 111 but 8 -> 1000.

    So, we need to first calculate the number of bits for numbers less than a power of 2.

    When N = 6, we need to first calculate the power of 2 closest to N, i.e. 4. 
    We use a = log2(6) which gives us the value 2.

    To find the number of set bits from 1 to 3, we use the formula pow(2, a - 1) * a, i.e. pow(2, 1) * 2 = 4.

    Now, we need to observe that all numbers from 4 to 6 have the same leftmost bit set. And between 4 to 6,
    there are a total of 3 numbers. We calculate that using the formula (n - pow(2, a) + 1), i.e. (6 - 4 + 1)
    The 1 that is getting added accounts for the leftmost bit in 4.

    Now, the bits that remain to be counted are 00, 01, and 10 from 4, 5, and 6 respectively.

    In order to calculate that, we call the countSetBits(n - pow(2, a)) function recursively.
    In this example, we call countSetBits(6-4) or countSetBits(2) and the process continues.

    Note that when we are passing a power of 2 to the function countSetBits(), 

    1) the value for variable ans is calculated in one step and
    2) the recursive call to countSetBits(n - pow(2,a)) returns 0 because n - pow(2, a) evaluates to 0. 

*/


#include <iostream>
#include <cmath>

using namespace std;

int countSetBits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int a = log2(n);

    int ans = pow(2, a - 1) * a + (n - pow(2, a) + 1) + countSetBits(n - pow(2, a));

    return ans;
}

/* 

Complex solution - Will attempt to make sense of it at a later date.

int countSetBitsD(int n)
{
    int count = 0, num;
    while (n > 0)
    {
        num = 0;
        while (n >= 1 << (num + 1))
            num++;
        n -= 1 << num;
        count += (n + 1 + (1 << (num - 1)) * num);
    }
    return count;
} 

*/

int main()
{
    cout << "Total number of bits from 1 to 300 is " << countSetBits(300);

    return 0;
}