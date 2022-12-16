/*
    Program to find the digital root of a number. 

    If the sum of digits of a number n is a single digit, let's say if n = 26, the sum of its digits will be 8, 
    and we will return it to the main function as the digital root.

    However, if n = 888, the sum of its digits will be 24, we will proceed to find the sum of the digits of 24, i.e. 6
    and return it to the main function as the digital root.

    The same logic will apply for bigger numbers.
*/

#include <iostream>

using namespace std;

int digitalRoot(int n)
{

    if (n / 10 == 0)
        return (n % 10);

    else
    {
        return digitalRoot((n % 10) + digitalRoot(n / 10));
    }
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "\nDigital Root of " << n << " is " << digitalRoot(n);

    return 0;
}