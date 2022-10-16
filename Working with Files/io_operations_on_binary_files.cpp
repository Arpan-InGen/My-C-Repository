#include <iostream>
#include <fstream>
#include <iomanip> // for setw() and setprecision() methods

using namespace std;

const char *filename = "Binary";

int main()
{
    float height[4] = {175.5, 153.0, 167.25, 160.70};

    ofstream outfile;
    outfile.open(filename);

    outfile.write((char *)&height, sizeof(height)); // char * - pointer to char type

    outfile.close();

    for (int i = 0; i < 4; i++)
        height[i] = 0;

    ifstream infile;
    infile.open(filename);

    infile.read((char *)&height, sizeof(height));

    for (int i = 0; i < 4; i++)
    {
        /* Setting showpoint causes a decimal point and trailing zeros to be displayed for all
floating-point output. */
        cout.setf(ios::showpoint);
        cout << setw(10) << setprecision(2) << height[i]; // displays 1.8e+02   1.5e+02   1.7e+02   1.6e+02
        cout << setw(10) << setprecision(5) << height[i];  // displays 175.50    153.00    167.25    160.70
        cout << setw(10) << height[i];  // displays 175.500   153.000   167.250   160.700
    }

    infile.close();

    return 0;
}
