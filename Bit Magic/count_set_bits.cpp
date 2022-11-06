/* Program to find the number of set bits in an integer.

It uses Brian Kernighan's algorithm.
When we subtract one from any number, all the bits from the rightmost set bit are inverted for the smaller number (see below).

Let's take a number - 40.
Binary representation - 101000 (it has 2 set bits).
Also, if we look at 39, its binary is 100111 (in agreement with the rule above).

In the 1st iteration, when we perform an AND operation between 40 and 39,
we get 32 (100000) and count increments to 1.

In the 2nd iteration, when we perform an AND operation between 32 and 31.
we get 0 (000000) and count increments to 2.

The loop does not run any further and we get our result, i.e. count = 2.

In short, with every iteration, the rightmost set bit is taken care of and thus, for numbers
containing many trailing zeros, this method reduces the number of iterations. */

#include <iostream>

using namespace std;

int countSetBits(int n)
{
    int count = 0;

    while (n)
    {
        n &= (n - 1);
        count++;
    }

    return count;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    bool isPowerOf2 = ((num != 0) && ((num & (num - 1)) == 0)); // Additional functionality 
    // The placing of brackets is very important here for the condition to be evaluated correctly. 

    cout << "\nThe number of set bits are " << countSetBits(num);
    cout << "\nIs " << num << " a power of 2? " << (isPowerOf2 ? "true" : "false");

    return 0;
}