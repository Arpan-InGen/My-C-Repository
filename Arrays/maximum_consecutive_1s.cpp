#include <iostream>

using namespace std;

void find_max_count(int arr[], int n)
{
    int result = 0, current_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)

            current_count = 0;

        else
        {
            current_count++;
            result = max(result, current_count); // keeps a track of the highest count at any given point of time.
        }
    }

    cout << "Maximum count for consecutive 1s is " << result;
}

int main()
{
    int binary_array[] = {1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1};

    find_max_count(binary_array, 15);

    return 0;
}