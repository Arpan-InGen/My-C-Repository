#include <iostream>

using namespace std;

/// @brief - insert a number at a specified position in an array
/// @param arr - array passed from main function
/// @param n - represents the position of the last element in the existing array
/// @param num - number to be inserted
/// @param cap - maximum capacity of the array
/// @param pos - position at which num is to be inserted
/// @return - the updated value for n
int insert(int arr[], int n, int num, int cap, int pos)
{
    if (n == cap) 
        return n;

    int index = pos - 1; // determine the array index for the new element

    for (int i = n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i]; // Shifting the elements (to be positioned after index) back by one position
    }

    arr[index] = num;

    return n + 1; // returning n + 1 since a new element has been added to the list.
}

int main()
{

    int cap = 5, n = 3;
    int arr[5] = {5, 10, 20};

    cout << "Note: Array Size is 5" << endl;
    cout << "\nBefore Insertion" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int num, pos;

    cout << "\nEnter a number and the position in the array to place it in: ";
    cin >> num >> pos;

    n = insert(arr, n, num, cap, pos);

    cout << "\nAfter Insertion" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}