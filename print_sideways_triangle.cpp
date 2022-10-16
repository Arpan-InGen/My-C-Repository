/* To print the following hash pattern in the form of a sideways triangle.

#
# #
# # #
# # # #
# # #
# #
#

*/

/*

Approach
--------
Visualize the pattern in a way where there are 4 boxes in every row.
The positions where the hashes are present are filled boxes while the rest are empty.
We first calculate the number of empty boxes for each row.
Then we subtract the value from 4 to determine the number of hashes to be printed.

*/

#include <iostream>

using namespace std;

int main()
{

    /*
        Testing for another program
        ---------------------------
        char digit;
        cout << "Enter a one-digit number: ";
        cin >> digit;
        int sum = digit - '0';
        cout << "Is the sum of digits " << sum << "? \n";

        cout << "Enter a number: ";
        char digit;
        while (true)
        {
            digit = cin.get();
            cout << int(digit) << " ";
        }

     */

    for (int row = 1; row <= 7; row++)
    {
        for (int hashNum = 1; hashNum <= 4 - abs(4 - row); hashNum++)

            cout << "# ";

        cout << "\n";
    }

    return 0;
}
