#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout.setf(ios::showpoint);

    cout << setw(5) << "n"
         << setw(17) << "Inverse of n" << setw(20) << "Sum of terms\n\n";

    float term, sum = 0;

    for (int n = 1; n <= 10; n++)
    {
        term = 1.0 / float(n);
        sum = sum + term;

        cout << setw(5) << n
             << setw(15) << setprecision(4) << setiosflags(ios::scientific) << term 
             << setw(15) << resetiosflags(ios::scientific) << sum << endl;
    }

    return 0;
}