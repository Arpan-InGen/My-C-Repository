/* Program to find the maximum sum of all sub-arrays of size n in a given array. 

We would be using the sliding window technique here to solve the problem.

if an array arr contains the elements {20, 18, 30, -4, 50, 39, -10} and the subarray size is 4,
we will begin by finding the sum of the first 4 elements, i.e. from index 0 to 3 (the 1st for loop).

We save the result in the variable res for future comparison.

Then we shift to the next set of 4 elements, i.e. from index 1 to 4, and continue doing the same 
till we get to indexes 3 to 6.

At each step, we check the difference between the new element on the right (i.e. i = s) and the leftmost
element (i.e. i - s) and add it to the variable sum. That would help us know the bigger of the two variables,
sum and res.

Finally, the largest subarray sum is stored in res and returned to the main function.

*/

#include <iostream>

using namespace std;

int maxSum(int arr[], int n, int s)
{
    int sum = 0, i;

    for (i = 0; i < s; i++)
        sum += arr[i];

    int res = sum;

    for (i = s; i < n; i++)
    {
        sum += arr[i] - arr[i - s];
        res = max(res, sum);
    }

    return res;
}

int main()
{
    int arr[] = {20, 18, 30, -4, 50, 39, -10};
    int sub;

    cout << "Enter subarray size: ";
    cin >> sub;

    cout << "Max sum of " << sub << " elements is " << maxSum(arr, 7, sub);

    return 0;
}