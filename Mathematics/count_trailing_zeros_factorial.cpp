#include <iostream>

using namespace std;

/* 
    Every trailing zero in a factorial can be attributed to a 10 which is a product of 2 and 5.
    We know that while calculating a factorial, all even numbers can be reduced to multiples of 2.
    However, when it comes to 10, it is the number 5 which is of greater significance here.
    Therefore, if we can use the powers of 5 in a factorial, we can easily find the number of 10s.

    e.g. If n = 80, we can calculate the number of 10s using m terms where 5^m <= n or 5^2 <= 80 as 5^3 = 125.  
    Therefore, 80/(5^1) + 80/(5^2) = 80/5 + 80/25 = 16 + 3 = 19. Thus, there are 19 trailing zeros in 80!.

    While calculating the factorial of 80, not only would we see multiples of 5 but we would also come across 
    multiples of 25, each of which contain (5*5) within them, such as 25, 50, and 75. 
    Each 5 in 5^m can be multiplied with a 2 to give us a 10. 
*/ 

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