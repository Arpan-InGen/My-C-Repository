#include <iostream>
using namespace std;

bool check_for_prime(int n)
{
    if (n == 1)
        return false;

    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    /* Since factors of a number come in pairs,
    if x <= y in a pair (x,y) for a number n,
    x*x <= n */
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main()
{
    cout << "Is 169 a prime number? " << check_for_prime(169);
    return 0;
}