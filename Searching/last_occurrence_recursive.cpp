/*
    Program to find the last occurrence of a number in a sorted array.
*/

#include <iostream>

using namespace std;

int find_last_occurrence(int arr[], int low, int high, int size, int x)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (x > arr[mid])
        return find_last_occurrence(arr, mid + 1, high, size, x);

    else if (x < arr[mid])
        return find_last_occurrence(arr, low, mid - 1, size, x);

    else
    {
        // this code section is executed only when x = arr[mid].
        // mid = size - 1 when both low and high are equal to size - 1, i.e. we are looking at the last element of the array.
        if (mid == size - 1 || arr[mid] != arr[mid + 1])
            return mid;

        else
            // we make the below function call when arr[mid] = arr[mid + 1].
            return find_last_occurrence(arr, mid + 1, high, size, x);
    }
}

int main()
{
    int arr[8] = {0, 1, 2, 3, 4, 5, 5, 5};

    cout << "The last occurrence of 4 in the array is at index " << find_last_occurrence(arr, 0, 7, 8, 4);

    return 0;
}