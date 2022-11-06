/* File for testing solution attempts on GFG */

/* Program to print numbers with exactly 3 divisors - Naive Solution. */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;

    cout <<"\nEnter number: ";
    cin >> N;

    // unsigned long long fact = 1;

    //     while (N != 0)
    //     {
    //         fact *= N;
    //         N--;
    //     }
        
    //     cout<<"\nfact - "<<fact;
    //     int digit_count = 0;
        
    //     while (fact)
    //     {
    //         digit_count++;
    //         fact /= 10;
    //     }

    if (N < 0){
            return 0;
        }
   
        if (N <= 1){
            return 1;
        }
   
        double num_digits = 1;
        for (int i=2; i<=N; i++){
            num_digits += log10(i);
            cout<<"\nlog10(i): "<<log10(i);
            cout<<"\nnum_digits: "<<num_digits;
        }

     cout <<"\nNumber of digits in the factorial - "<<floor(num_digits);   
    
    /* int A, B, N;
    // Alternatively declare A and B as double
    cout << "\nEnter first two terms: ";
    cin >> A >> B;
    cout << "\nEnter N: ";
    cin >> N;

    if (N == 1)
        return A;

    if (N == 2)
        return B;

    double ratio = B * 1.0 / A;
    // double ratio = (B / A); if A and B are double

    cout << "Ratio = " << ratio;

    double term = A * pow(ratio, (N - 1));

    cout << "\nNth term = " << term; */

    /* int num_count = 0;
    int N;

    cout << "Enter a number: ";
    cin >> N;

    int count = 0;

        // Your code here
        while(N){
            if (N & 1)
                count++;
            N = N >> 1;
        }

        if (count == 1)
            cout <<"Power of 2";
        else
            cout << "Not a Power of 2"; */

    /* for (int i = 1; i <= N; i++)
    {
        int div_count = 0;
        int j;
        for (j = 1; j * j <= i; j++)
        {
            if (j * j == i)
                div_count++;

            else if (i % j == 0)
                div_count += 2;
        }

        if (div_count == 3)
            num_count++;
    }

    cout << "\n\nNumbers <= " << N << " with divisors = 3 is " << num_count; */
    return 0;
}