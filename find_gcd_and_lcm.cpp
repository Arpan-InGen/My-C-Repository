#include <iostream>

using namespace std;

/* Since we are using Euclid's algorithm, the assumption is that b is smaller than a.*/
int find_gcd(int a, int b)
{
    if (b == 0)
        return a;

    return find_gcd(b, a % b);
}

/* Product of two numbers = Product of their HCF and their LCM*/
int find_lcm(int a, int b)
{
    return (a * b) / find_gcd(a, b);
}

int main()
{
    int a = 20, b = 5;
    cout << "\nThe gcd of 20 and 5 is " << find_gcd(20, 5);
    cout << "\nThe lcm of 20 and 5 is " << find_lcm(20, 5);
    return 0;
}