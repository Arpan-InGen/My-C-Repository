#include <iostream>

using namespace std;

void find_maximum_difference(int arr[], int size)
{
    int min_value = arr[0];     // Set min_value to the first array element
    int diff = arr[1] - arr[0]; // Initialize diff as the difference between the first two array elements

    for (int j = 1; j < size; j++)
    {
        diff = max(diff, arr[j] - min_value); // update diff by comparing the differences computed at each step
        // with the diff from the previous step
        min_value = min(min_value, arr[j]); // update min_value while traversing the array
    }

    cout << "The maximum difference between the array elements is " << diff;
}

int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    // int arr[] = {20, 18, 17, 12, 5, 3, 1};

    find_maximum_difference(arr, 7);

    return 0;
}