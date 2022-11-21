/*

Given two numbers M and N, we have to find the position of the rightmost different bit
in the binary representation of the numbers.

Example
-------

Input: M = 52, N = 4
Output: 5
Explanation: Binary representation of the given numbers are: 110100 and 0100,
5th-bit from right is different.

Explanation behind the solution
-------------------------------

We know that for an XOR operation between two numbers M and N, for the different bits at their
respective positions, we would get a 1.

1. Using the example above, for M ^ N, we get 48 (i.e. 110000).

2. Since there are two 1s here, we have to use 2's complement in order to remove the extra 1 
(or 1s depending on the scenario) and find the position of the rightmost 1.
So, if op = 110000, 2's complement of op, i.e. -op = 010000 (16).

3. Now, we need to perform a bitwise AND of op and -op to get 10000.

4. Since the result is a power of 2, we can use the log2 function to get the answer we need.
Therefore, log2(10000) or log2(16) is 4. But as the set bit is at the 5th position, we need to add 1 to our result.

*/

#include <iostream>
#include <cmath>

using namespace std;

int find_rightmost_diff_bit(int m, int n)
{

    int op = m ^ n;

    if (op == 0)
        return -1;

    else
        return log2(op & -op) + 1;
}

int main()
{
    int m, n;

    cout << "Enter two numbers: ";
    cin >> m >> n;

    int pos = find_rightmost_diff_bit(m, n);

    if (pos == -1)
        cout << "\n\nThe two numbers are the same";

    else
        cout << "\n\nPosition of the rightmost different bit is " << pos;

    return 0;
}