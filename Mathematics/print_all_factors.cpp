/* Program that prints all factors of a number. */

#include <iostream>

using namespace std;

void printFactors(int n)
{
    int i;

    cout << "\nFactors of " << n << " are: ";

    /* 
        Since factors of a number come in pairs,
        if x <= y in a pair (x,y) for a number n,
        x*x <= n 
    */

    /* 
        Let's take an example.
        If n= 25, then the 1st for loop will run from i = 1 to i = 4.
        At the end of the 1st for loop, i = 5. Hence, the second for loop will run from i = 5 to i = 1.

        Therefore, first for loop would print 1 and the second for loop would print 5 and 25 as the factors.
    */

    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }

    for (; i >= 1; i--)
    {
        if (n % i == 0)
            cout << (n / i) << " ";
    }
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    printFactors(num);

    return 0;
}