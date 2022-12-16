/*
    Program to find square root of a number using binary search logic.
*/

#include <iostream>

using namespace std;

int find_square_root(int n)
{
    int low = 1, high = n, mid, mid_square, ans = -1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        mid_square = mid * mid;

        if (mid_square == n)
            return mid;

        else if (mid_square > n)
            high = mid - 1;

        else
        {
            low = mid + 1;
            ans = mid; // When n is not a perfect square, we save the value of mid in the variable ans.
                       // And we keep updating the value of ans till we reach the value whose square is closest to n.
        }
    }
    return ans;
}

int main()
{
    int num;

    cout << "Enter number to find square root: ";
    cin >> num;

    cout << "\nThe square root of " << num << " is " << find_square_root(num);

    return 0;
}