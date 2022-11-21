#include <iostream>

using namespace std;

int calculateSum(int n)
{
    if (n == 0)
        return 0;

    return n + calculateSum(n - 1);
}

int main()
{
    int n;

    cout << "Enter a value for n: ";
    cin >> n;

    cout << "The sum of " << n << " numbers is " << calculateSum(n);

    return 0;
}