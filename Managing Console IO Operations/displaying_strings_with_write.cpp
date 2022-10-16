// Unformatted I/O Operation

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char *string1 = "C++";
    char *string2 = "Programming";

    int m = strlen(string1);
    int n = strlen(string2);

    for (int i = 1; i < n; i++)
    {
        cout.write(string2, i);
        cout << "\n";
    }

    cout.write(string1, m).write(string2, n); // Concatenating strings

    cout << "\n";

    cout.write(string1, 10); // displays more characters than what is contained in string1

    cout << "\n"
         << string1;

    return 0;
}