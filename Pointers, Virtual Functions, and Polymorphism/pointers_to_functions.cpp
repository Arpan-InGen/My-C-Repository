#include <iostream>

using namespace std;

typedef void (*funcPtr)(int, int);  // declaring a function pointer

void add(int i, int j)
{
    cout << i << " + " << j << " = " << i + j;
}

void subtract(int i, int j)
{
    cout << i << " - " << j << " = " << i - j;
}

int main()
{
    funcPtr ptr;

    ptr = &add;
    ptr(4, 5);

    cout << "\n\n";

    ptr = &subtract;
    ptr(50, 40);

    return 0;
}