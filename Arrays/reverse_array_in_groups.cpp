#include <iostream>

using namespace std;

void reverseInGroups(int arr[], int n, int k)
{
    for (int i = 0; i < n; i += k)
    {
        int left = i;

        // to handle case when k is not multiple of n
        int right = min(i + k - 1, n - 1);

        // reverse the sub-array [left, right]
        while (left < right)
            swap(arr[left++], arr[right--]);

    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int group_size;

    cout << "Enter group size: ";
    cin >> group_size;

    reverseInGroups(arr, 11, group_size);

    cout << "\n\nArray after being reversed in groups of " << group_size << " is ";

    for (int i = 0; i < 11; i++)
        cout << arr[i] << " ";

    return 0;
}