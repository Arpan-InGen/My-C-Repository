#include <iostream>

using namespace std;

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low++], arr[high--]);
    }
}

void rotateLeft(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

int main()
{
    int arr[] = {5, 6, 7, 8, 9};
    int d;

    cout << "Enter a value for d: ";
    cin >> d;

    if (d > 5)
        d = d % 5; // If the value of d entered is large, e.g. d = 103

    rotateLeft(arr, 5, d);

    cout << "\n\nArray after left rotated by " << d << " positions is ";

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}