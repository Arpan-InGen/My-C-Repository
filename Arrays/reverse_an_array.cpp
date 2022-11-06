#include <iostream>

using namespace std;

void reverseArray(int arr[], int n)
{
    int temp, i;

    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    cout << "\nReversed array is ";

    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {1, 23, 13, 49};

    reverseArray(arr, 4);

    return 0;
}