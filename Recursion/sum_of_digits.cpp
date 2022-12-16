#include <iostream>

using namespace std;

int findSumOfDigits(int n)
{
    if (n == 0)
        return 0;

    // A slightly more efficient way of writing the if condition is
    // if (n <= 9)
    //     return n;

    else
        return (n % 10) + findSumOfDigits(n / 10);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "\nThe sum of digits in " << n << " is " << findSumOfDigits(n);

    return 0;
}