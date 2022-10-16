#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "\nsqrt(10) = " << sqrt(10) << " (default setting) \n\n";

    cout << "Precision set to 3 digits \n\n";
    cout.precision(3);

    cout.width(10);
    cout << "Value";
    cout.width(15);
    // The text "Sqrt of Value" contains 13 characters.
    // Space for 2 extra characters (whitespaces) are allocated in cout.width(15)
    cout << "Sqrt of Value"
         << "\n";

    for (int n = 1; n <= 5; n++)
    {
        cout.width(8);
        cout << n;
        cout.width(13);
        cout << sqrt(n) << "\n";
    }

    cout << "\nPrecision set to 5 digits \n\n";
    cout.precision(5);

    cout << "sqrt(10) = " << sqrt(10) << "\n\n";

    cout.precision(0);

    cout << "sqrt(10) = " << sqrt(10) << "\n\n";

    return 0;
}