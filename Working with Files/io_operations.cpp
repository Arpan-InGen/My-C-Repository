#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    char string[80], ch;

    cout << "\nEnter a string: ";
    cin >> string;

    int len = strlen(string);

    fstream file; // input and output stream

    cout << "\nOpening the 'Text' file and storing the string in it.\n";

    file.open("Text", ios::out); // ios::in requires an existing file
    file.close();
    file.open("Text", ios::in | ios::out); // Now, we can specify both ios::in and ios::out for reading and writing

    for (int i = 0; i < len; i++)
        file.put(string[i]);

    file.seekg(0); // moves the file's current get pointer to the beginning

    cout << "\nReading the file contents: ";

    /* get( ) returns a reference to the stream file, and in will be false when
the end of the file is encountered. */
    while (file.get(ch))
    {
        cout << ch;
    }

    return 0;
}