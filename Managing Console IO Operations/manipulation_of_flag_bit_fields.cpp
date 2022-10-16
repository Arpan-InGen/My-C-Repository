#include <iostream>

using namespace std;

int main()
{
    int num;

    cout.fill('*');
    cout.precision(3);
    cout.setf(ios::internal, ios::adjustfield);  // This statement when used alone would return -**********12.3
    cout.setf(ios::scientific, ios::floatfield); // This statement when used alone would return *****-1.235e+01
    cout.width(15);

    cout << -12.34567 << "\n"; // Both setf statements combined give us -*****1.235e+01

    cout << "Enter an integer value: ";
    cin >> num;

    cout << "The hexadecimal and octal representations of " << num << " are: ";

    cout.setf(ios::hex, ios::basefield);
    cout << num << ", ";

    cout.setf(ios::oct, ios::basefield);
    cout << num;

    return 0;
}