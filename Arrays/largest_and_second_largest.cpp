/* Program to find the largest and second largest elements in an array. */

#include <iostream>

using namespace std;

/// @brief - prints the largest and second largest elements in the array arr.
/// @param arr - stores the array passed from the main function.
/// @param n - contains the array size.
void findLargestElements(int arr[], int n)
{
    int res = -1, largest = 0; // res is set to -1 for the special case where all elements are the same.

    for (int i = 1; i < n; i++)
    {

        if (arr[i] > arr[largest])
        {
            res = largest; // arr[res] would be holding the second largest element
            largest = i;   // arr[largest] would be holding the largest element
        }

        else if (arr[i] != arr[largest]) // This is applicable when arr[i] < arr[largest] and also when we
        // want to ignore elements that are repeating in the array, e.g. 7, 12, 11, 12, 19
        {
            // res == -1 - This is true when all the array elements encountered so far are the same.
            // arr[i] > arr[res] - when the current element (arr[i]) is greater than the second largest element (arr[res]),
            // then the current element becomes the second largest element, i.e. res = i.
            if (res == -1 || arr[i] > arr[res])
                res = i;
        }
    }

    // If all elements of the array are same, then the value of largest remains 0.

    cout << "\nThe largest element is " << arr[largest];

    if (res != -1)
        cout << "\nThe second largest element is " << arr[res];
    else
        cout << "\nThere is no second largest element";
}

int main()
{
    int arr[5];

    cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    findLargestElements(arr, 5);

    return 0;
}