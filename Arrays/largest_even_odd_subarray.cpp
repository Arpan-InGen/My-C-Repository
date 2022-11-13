/* Program to find the largest even odd subarray where there are alternating even and odd numbers. */

#include <iostream>

using namespace std;

int findMaxEvenOdd(int arr[], int n)
{
    int count = 1, result = 1;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
        {
            count++;
            result = max(result, count);
        }

        else
            count = 1;
    }

    return result;
}

int main()
{
    int arr[] = {5, 10, 20, 6, 3, 8};

    cout << "The length of the largest even odd subarray is " << findMaxEvenOdd(arr, 6);

    return 0;
}