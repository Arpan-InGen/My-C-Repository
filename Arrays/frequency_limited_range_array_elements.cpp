/* 
    This is a problem in the Array module of GFG.

    Given an array A[] of N positive integers which can contain integers from 1 to P 
    where elements can be repeated or can be absent from the array. 
    Your task is to count the frequency of all elements from 1 to N.

    Example 1
    ---------

    Input:
    N = 5
    arr[] = {2, 3, 2, 3, 5}
    P = 5

    Output:
    0 2 2 0 1

    Explanation: 
    Counting frequencies of each array element
    We have:
    1 occurring 0 times.
    2 occurring 2 times.
    3 occurring 2 times.
    4 occurring 0 times.
    5 occurring 1 time.


    Example 2
    ---------

    Input:
    N = 4
    arr[] = {3,3,3,3}
    P = 3

    Output:
    0 0 4 0

    Explanation: 
    Counting frequencies of each array element
    We have:
    1 occurring 0 times.
    2 occurring 0 times.
    3 occurring 4 times.
    4 occurring 0 times. 
*/

#include <iostream>

using namespace std;

void frequencyCount(int arr[], int N, int P)
{
    int new_arr[N];

    for (int i = 1; i <= P; i++)
    {
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            if (arr[j] == i)
                count++;
        }

        // cout << count << " ";
        new_arr[i-1] = count;
    }

    for (int i = P; i < N; i++)
        new_arr[i] = 0;

    for (int i = 0; i < N; i++)
        cout << new_arr[i] << " ";
}

int main()
{
    int arr[] = {2, 3, 2, 3, 5};
    //int arr[] = {3, 3, 3, 3, 3, 3, 3, 3};
    int p = 5;

    frequencyCount(arr, 5, p);

    return 0;
}