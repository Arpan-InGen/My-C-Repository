/*
    Program to find the first occurrence of a number in a sorted array.
*/

#include <iostream>

using namespace std;

int find_first_occurrence(int arr[], int low, int high, int x)
{
    if (low > high) // when the given number x is not present in the array.
        return -1;

    int mid = (low + high) / 2;

    if (x > arr[mid])
        return find_first_occurrence(arr, mid + 1, high, x);

    else if (x < arr[mid])
        return find_first_occurrence(arr, low, mid - 1, x);

    else
    {
        // this code section is executed only when x = arr[mid].
        // mid = 0 when both low and high are equal to 0, i.e. we are looking at the first element of the array.
        if (mid == 0 || arr[mid - 1] != arr[mid])
            return mid;

        else
            // we make the below function call when arr[mid - 1] = arr[mid].
            return find_first_occurrence(arr, low, mid - 1, x);
    }
}

int main()
{
    int arr[8] = {0, 1, 2, 3, 4, 5, 5, 5};

    cout << "The first occurrence of 5 in the array is at index " << find_first_occurrence(arr, 0, 7, 5);

    return 0;
}