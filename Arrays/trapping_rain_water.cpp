#include <iostream>

using namespace std;

void calculateCapacity(int arr[], int n)
{
    int capacity = 0;

    int left_max[n], right_max[n], i;

    left_max[0] = arr[0];

    for (i = 1; i < n; i++)
        left_max[i] = max(arr[i], left_max[i - 1]); // left_max array - {5, 5, 6, 6, 6}

    right_max[n - 1] = arr[n - 1];

    for (i = n - 2; i >= 0; i--)
        right_max[i] = max(arr[i], right_max[i + 1]); // right_max array - {6, 6, 6, 3, 3}


    // Remember, in this case, the only columns that can hold water are arr[1] and arr[3]. So, for these columns
    // the adjacent upper and lower limits must be determined. This is where the left_max and right_max 
    // arrays are of use. The limits for arr[1] are 5 and 6 and the limits for arr[3] are 6 and 3.
    for (i = 1; i < n - 1; i++)
        capacity += min(left_max[i], right_max[i]) - arr[i];

    cout << "The amount of water that the structure can store is - " << capacity;
}

int main()
{
    int arr[] = {5, 0, 6, 2, 3};

    calculateCapacity(arr, 5);

    return 0;
}