#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    char name[30];
    float cost;

    ofstream outfile("Item"); // connect "Item" file to outfile object of ofstream class

    cout << "Enter item name: ";
    cin >> name;

    cout << "Enter item cost: ";
    cin >> cost;

    outfile << name << "\n"; // write to Item
    outfile << cost << "\n";
    outfile.close();

    ifstream infile("Item"); // connect "Item" file to infile object of ifstream class

    infile >> name; // read name from Item
    infile >> cost;

    cout << "\n";
    cout << "Item name: " << name << "\n";
    cout << "Item cost: " << cost << "\n";

    infile.close();

    return 0;
}
