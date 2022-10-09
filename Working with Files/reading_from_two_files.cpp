// Reads the files created in 'working_with_multiple_files.cpp'

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const int SIZE = 80;
    char line[SIZE];

    ifstream fin1, fin2;
    fin1.open("Country");
    fin2.open("Capital");

    /* Since there are only two entries for both Countries and Capitals,
    the upper limit has been set to 2. */
    for (int i = 1; i <= 2; i++)
    {
        if (fin1.eof() != 0)  // eof() method returns non-zero (true) value when end-of-file is reached.
        {
            cout << "Exit from Country \n";
            exit(1);
        }

        fin1.getline(line, SIZE);
        cout << "Capital of " << line << " - ";

        if (fin2.eof() != 0)
        {
            cout << "Exit from Capital \n";
            exit(1);
        }

        fin2.getline(line, SIZE);
        cout << line << "\n";
    }

    return 0;
}