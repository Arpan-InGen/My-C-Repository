#include <iostream>

using namespace std;

int find_first_occurrence(int arr[], int size, int num)
{
    int low = 0, high = size - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] > num)
            high = mid - 1;

        else if (arr[mid] < num)
            low = mid + 1;

        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                high = mid - 1;
        }
    }

    return -1;
}

int find_last_occurrence(int arr[], int size, int num)
{
    int low = 0, high = size - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] > num)
            high = mid - 1;

        else if (arr[mid] < num)
            low = mid + 1;

        else
        {
            if (mid == size - 1 || arr[mid] != arr[mid + 1])
                return mid;
            else
                low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[8] = {0, 1, 2, 3, 4, 5, 5, 5};

    cout << "The number of occurrences of 5 in the array is ";

    int result = find_first_occurrence(arr, 8, 5);

    if (result == -1)
        cout << 0; // No occurrence found.
    else
    {
        /*
            Even if there is only one occurrence of an element, i.e. first occurrence is not -1,
            there will be a last occurrence as well.
            If there are more occurrences, we need to subtract the first occurrence index from the
            last occurrence index and add 1 to the result.
        */
        result = find_last_occurrence(arr, 8, 5) - result + 1;
        cout << result;
    }

    return 0;
}