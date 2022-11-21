#include <iostream>

using namespace std;

int binary_search(int arr[], int size, int num)
{
    int low = 0, high = size - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == num)
            return mid;

        else if (arr[mid] > num)
            high = mid - 1;

        else
            low = mid + 1;
    }

    return -1;
}

int main()
{
    int arr[10] = {1, 2, 3, 3, 5, 6, 7, 8, 9, 10}, num, index;

    cout << "\nEnter element to be searched: ";
    cin >> num;

    index = binary_search(arr, 10, num);

    if (index != -1)
        cout << num << " found at index " << index;
    else
        cout << num << " not found";

    return 0;
}