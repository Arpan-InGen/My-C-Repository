// Creating files with open function

#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream fout;
    fout.open("Country"); // connect "Country" file to fout object

    fout << "USA\n";
    fout << "UK\n";

    fout.close(); // disconnect fout object from "Country"

    fout.open("Capital");
    fout << "Washington DC\n";
    fout << "London\n";

    fout.close();

    const int N = 80;
    char line[N];

    ifstream fin;
    fin.open("Country"); // connect "Country" file to fin object

    cout << "Contents of Country file\n";

    while (fin)
    {
        fin.getline(line, N); // read a line
        cout << line << "\n"; // display it
    }

    fin.close();

    fin.open("Capital");

    cout << "Contents of Capital file\n";

    while (fin)
    {
        fin.getline(line, N);
        cout << line << "\n";
    }

    fin.close();

    return 0;
}