#include <iostream>
#include <iomanip>

using namespace std;

// User-defined manipulators

ostream &currency(ostream &output)
{
    output << "₹";
    return output;
}

ostream &format(ostream &output)
{
    output.setf(ios::showpoint);
    output.precision(2);                          // using this statement alone would print ₹ 7.9e+03
    output << setiosflags(ios::fixed) << setw(8); // using the format flag ios::fixed prints ₹ 7864.50
    return output;
}

int main()
{
    cout << currency << format << 7864.5;
    return 0;
}