/* Program to check if elements of a subarray add up to a given sum.

We use a variation of the sliding window technique to solve this problem.

With every iteration of the for loop, we add up the array elements one by one. However there can be two
scenarios -

1. A match is found (i.e. curr_sum == sum), then print the range of the indexes and end the loop execution.

2. The curr_sum exceeds the sum, then start decreasing curr_sum by subtracting array elements from the left,
i.e. indexes 0, 1, 2 and so on, until curr_sum <= sum.

The start variable is incremented whenever the while loop is run to keep track of the starting index of the
subarray.

*/


#include <iostream>

using namespace std;

int findSubArray(int arr[], int n, int sum)
{
    int curr_sum = 0, start = 0;

    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];

        while (curr_sum > sum)
        {
            curr_sum -= arr[start];
            start++;
        }

        if (curr_sum == sum)
        {
            cout << "\nSum found between indexes " << start << " and " << i;
            return 1;
        }
    }

    cout << "\nNo subarray found with the sum " << sum;

    return 0;
}

int main()
{
    int arr[] = {1, 4, 20, 3, 21, 5};
    int sum;

    cout << "Enter subarray sum: ";
    cin >> sum;

    findSubArray(arr, 6, sum);

    return 0;
}