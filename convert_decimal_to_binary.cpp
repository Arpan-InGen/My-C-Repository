#include <iostream>
#include <cmath>

using namespace std;

void decimal_to_binary_bitwise(int n)
{
    int orig = n;
    string str;

    /*
    While testing, it has been seen that the while loop runs exactly
    the number of times the length of the binary value.
    e.g. for 64, i.e. 1000000, it runs 7 times.
    */

    while (n)
    {
        // cout << "\nInside while";
        if (n & 1) // Performing the AND operation with the LSB.
            str = str + '1';
        else
            str = str + '0';
        n = n >> 1; // Right shift the number (its binary equivalent) by 1 bit.
    }

    // After the loop completes, the binary equivalent of 'n' will be stored in reverse in str.
    // e.g. if n = 64, str would be equal to 0000001

    // cout << "\nString size is " << str.size();

    cout << "\nBinary equivalent of " << orig << " using Bitwise Operator is ";

    for (int i = str.size() - 1; i >= 0; i--)
        cout << str[i];
}

void decimal_to_binary_arithmetic(int n)
{
    unsigned int binary = 0;
    int orig, count = 0;

    orig = n;

    while (n != 0)
    {
        int rem = n % 2;
        binary = binary + rem * pow(10, count);
        n = n / 2;
        count++;
    }

    cout << "\nBinary equivalent of " << orig << " using Arithmetic Calculations is " << binary;
}

int main()
{
    int num;
    char choice;

    cout << "Enter decimal number: ";
    cin >> num;

    cout << "\n\nChoose one of the below options (1 or 2)";
    cout << "\n1. Binary equivalent using Bitwise Operator";
    cout << "\n2. Binary equivalent using Arithmetic Calculations\n\n";

    cin >> choice;

    switch (choice)
    {
    case '1':
        decimal_to_binary_bitwise(num);
        break;

    case '2':
        decimal_to_binary_arithmetic(num);
        break;

    default:
        cout << "\nIncorrect input received - " << choice << ". Please enter correct input next time.";
        break;
    }

    return 0;
}