/* 

    Given a number N. Find the length of the longest consecutive 1s in its binary representation. 

    Input: N = 222

    Output: 4

    Explanation: 
    Binary representation of 222 is 
    11011110, in which 1111 is the 
    longest consecutive set bits of length 4. 

*/

#include <iostream>

using namespace std;

int maxConsecutiveOnes(int N)
{

    int count = 0;
    int result = 0;

    while (N)
    {
        if (N & 1)
            count++;
        else
            count = 0; // reset the count to 0 if there you encounter a 0 among the 1s

        result = max(result, count); // keep a track of the max number of consecutive 1s for each iteration 

        N >>= 1;
    }

    return result;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "The maximum number of consecutive 1s in " << num << " is " << maxConsecutiveOnes(num);

    return 0;
}