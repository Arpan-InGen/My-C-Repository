/* Program to find the exponentiation result of a number using recursion. */

#include <iostream>

using namespace std;

int find_power_recursion(int b, int e)
{
    // At the last recursive call, this condition will evaluate to true.
    if (e == 0)
        return 1;

    if (e < 0)
        e = abs(e);

    /* 
        Let's take an example.
        If we have to compute find_power_recursion(3,5), we would need the value of find_power_recursion(3,2), i.e. 9.
        Since 3^5 can be written as (3^2) * (3^2) * 3, the statements temp *= temp; and return temp * b;
        help us achieve the same. 
    */

    int temp = find_power_recursion(b, e / 2);

    temp *= temp;

    if (e % 2 == 0)
        return temp;

    else
        return temp * b;
}

int find_power_iteration(int b, int e)
{
    /* 
        A number can be expressed as the sum of exponents of 2,
        e.g. 3^7 = 3^4 * 3^2 * 3^1. The binary equivalent of 7 is 0111 and the last 3 bits 
        can be written as 4, 2, and 1 as powers of 2. 
    */
    if (e == 0)
        return 1;

    if (e < 0)
        e = abs(e);

    int result = 1;

    while (e != 0)
    {
        if (e & 1) // Optimizing the step using bitwise operator instead of writing if (e % 2 == 1)
            result = result * b;
        
        /*
            Let's assume b = 2 and e =7 . 
            The while loop will run 3 times and in the end, b would be equal to 256 (i.e. 16^2).
            However, result would be equal to 128. How?
            After 1st iteration, result = 2, b = 4
            After 2nd iteration, result = 8, b = 16
            After 3rd iteration, result = 128, b = 256
         */
        b *= b;
        e = e >> 1; // Optimizing the step using bitwise operator instead of writing e = e / 2
    }

    return result;
}

int main()
{
    int base, exponent;
    char choice;
    float result;

    cout << "Enter a base and its exponent: ";
    cin >> base >> exponent;

    cout << "\n\nChoose one of the below options (1 or 2)";
    cout << "\n1. Exponentiation using Recursion";
    cout << "\n2. Exponentiation using Iteration\n\n";

    cin >> choice;

    switch (choice)
    {
    case '1':
        result = find_power_recursion(base, exponent);
        break;

    case '2':
        result = find_power_iteration(base, exponent);
        break;

    default:
        cout << "\nIncorrect input received - " << choice << ". Please enter correct input next time.";
        exit(0);
    }

    if (exponent >= 0)
        cout << "\nThe result of the exponentiation operation is " << result;

    else // Accounting for negative exponents
        cout << "\nThe result of the exponentiation operation is " << (1 / result);

    return 0;
}
