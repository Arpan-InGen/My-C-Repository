/* 
    Program to find the minimum group flips for a binary array.

    For example, if an array contains an unequal grouping of elements
    such as arr[] = {1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1};

    We can see that the number of groups of 1 and 0 are 3 and 2 respectively.

    For 1 - indexes 0-1, 5-7, and 10
    For 0 - indexes 2-4, and 8-9.

    So, we can make the minimum group flips with 0 instead of 1.

    Clearly, in such cases, we need to consider the element which is not the same as the first array element.

    When it comes to equal grouping of array elements, the method above works perfectly well.
    */


#include <iostream>

using namespace std;

void find_minimum_flips(int arr[], int n)
{
    // int start, end;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
            {
                // start = i;
                // end = i;
                cout << "\nFrom " << i << " to ";
            }

            else
                cout << i - 1;
        }

        // if (arr[i] == arr[i - 1] && arr[i] != arr[0])
        //     end++;
    }

    if (arr[n - 1] != arr[0])
        cout << n - 1;
}

int main()
{
    int arr[] = {1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1};

    find_minimum_flips(arr, 11);

    return 0;
}