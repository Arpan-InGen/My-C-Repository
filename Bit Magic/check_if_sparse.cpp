/*

    Given a number N, we need to check whether it is sparse or not. 
    A number is said to be a sparse number if two or more consecutive bits are not set in the 
    binary representation.

    If we do a bitwise AND of a number N with N >> 1 (i.e. N/2), the result would be 0 if the number is
    sparse. Otherwise, the result would be non-zero.  

*/

#include <iostream>

using namespace std;

bool checkSparse(int n)
{
    if (n & (n >> 1))
        return false;

    return true;

/* 
    Less Efficient Solution

    while (n)
    {
        if (n & 1 && (n >> 1) & 1)
            return false;

        n = n >> 1;
    }

    return true; 
*/
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Is number sparse? " << checkSparse(n);

    return 0;
}