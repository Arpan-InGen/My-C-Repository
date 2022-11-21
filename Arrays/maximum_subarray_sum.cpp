/* Program to find the maximum subarray sum in an array.

In the array - {1, -2, 3, -1, 2}, the subarray with the maximum sum is {3, -1, 2}
where the numbers add up to 4. For every element arr[i] from index 1 to n-1, we need to take it account
the sum -> arr[0] + arr[1] + ... + arr[i] and arr[i] to determine which is greater.
If the former is greater, continue with the same subarray.
If the latter is greater, ignore the previous subarray and start a new one from index i.  */

#include <iostream>

using namespace std;

void find_max_subarray(int arr[], int n)
{
    int result = arr[0], maxEnding = arr[0]; // initialize both result and maxEnding to first array element.
    // This way, if the first element is positive but has a lower magnitude than those of the other elements
    // which are negative, the value of result will still stay equal to arr[0]. See example below.

    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]); // maxEnding is used to determine
        // whether we should continue to grow our existing subarray OR
        // we should start a new subarray and ignore the previous elements that are of no use anymore.

        result = max(result, maxEnding); // result stores the larger of two values,
        // a) the sum of the current subarray
        // b) the sum of the subarray from the previous iteration
    }

    cout << "Maximum subarray sum is  " << result;
}

int main()
{
    int arr[] = {1, -2, 3, -1, 2};
    // int arr[] = {1, -2, -3, -4, -5};

    find_max_subarray(arr, 5);

    return 0;
}