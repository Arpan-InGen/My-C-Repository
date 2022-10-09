#include <iostream>
using namespace std;

int countTrailingZeros(int n)
{
    int count = 0;

    for (int i = 5; i <= n; i *= 5)
    {
        count += n / i;
    }

    return count;
}

int main()
{
    cout << "Number of trailing 0s in 356! is " <<countTrailingZeros(356);

    return 0;
}