#include <iostream>

using namespace std;

int findNumberOfDigits(int n)
{
    if (n / 10 == 0)  // to account for single digit numbers whether positive or negative
        return 1;

    else
        return 1 + findNumberOfDigits(n / 10);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "\nThe number of digits in " << n << " is " << findNumberOfDigits(n);

    return 0;
}