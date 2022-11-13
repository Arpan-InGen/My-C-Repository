#include <iostream>

using namespace std;

void move_zeros_to_end(int arr[], int n)
{
    int i, count = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }

    cout << "Array after shifting zeros to the end is - ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {5, 10, 0, 0, 15, 0};

    move_zeros_to_end(arr, 6);

    return 0;
}