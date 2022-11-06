#include <iostream>

using namespace std;

int findOdd(int arr[], int n)
{
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
        // Formatting the output to view and analyze the XOR operations behind the scenes.
        cout << "\n Iteration " << i + 1 << ". arr[" << i << "] = " << arr[i] << ", res = " << res;
    }

    return res;
}

int main()
{

    int arr[] = {4, 3, 4, 3, 5, 3, 4, 5, 4}, n = 9;
    //int arr[] = {4, 4, 4, 4, 5, 5, 3}, n = 7; // for ease of analysis
    int result = findOdd(arr, n);

    cout << "\n\n The number with odd number of occurrences is " << result;

    return 0;
}