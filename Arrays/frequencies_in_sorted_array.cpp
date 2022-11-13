#include <iostream>

using namespace std;

void displayFrequencies(int arr[], int n)
{
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1] || i == n - 1)
        {
            cout << "\n"
                 << arr[i] << "      " << count;
            count = 1;
        }

        else
            count++;
    }
}

int main()
{
    int arr[] = {10, 10, 10, 25, 30, 30};
    //int arr[] = {10, 20, 30, 40};

    cout << "Element "
         << "Count";

    displayFrequencies(arr, 6);

    return 0;
}