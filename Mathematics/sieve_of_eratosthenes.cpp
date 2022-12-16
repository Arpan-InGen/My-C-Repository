/* Program to print all prime numbers below a given number n. */

#include <iostream>
#include <vector>

using namespace std;

void displayPrimeNumbers(int n)
{

    vector<bool> isPrime(n + 1, true); // declare a vector of type bool, size n+1, with all values set to true
    cout << "\n\nPrime numbers below " << n << " are: ";

    /* 
        The first two elements in the vector are unfilled as they represent the numbers 0 and 1
        which are not considered as prime or non-prime. 
    */
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }

        /* 
            We start j with the square of i. Why?
            Because for lower multiples of i compared to i*i, there would be other divisors,
            i.e. i*(i-1), i*(i-2), i*(i-3) and so on... that have already been marked as false in previous iterations.
            We also increment j by i each time so that multiples of i following i*i are set to false. 
        */

        for (int j = i * i; j <= n; j += i)
            isPrime[j] = false;
    }
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    displayPrimeNumbers(num);

    return 0;
}