/*
    Program to find the majority element, i.e. an element that appears more than
    n/2 times in an array of size n.

    We would be using Boyer-Moore Majority Voting Algorithm to solve this problem.

    When there is a majority number in an array, there would be instances of consecutive appearances
    of that number and to account for that, we use statements like

    if (arr[i] == candidate)
        votes++;

    Whenever 'votes' is decremented to 0, we take a new candidate for consideration. This candidate may not be
    the majority element however, at the end of the first for loop execution, the variable 'candidate' will
    hold the majority element if there exists one. If is is not a majority element, the subsequent
    for loop will perform a check and return -1.
*/

#include <iostream>

using namespace std;

int findMajorityElement(int arr[], int n)
{
    int i, candidate, votes = 0;

    for (i = 0; i < n; i++)
    {
        if (votes == 0)
        {
            candidate = arr[i];
            votes = 1;
        }

        else
        {
            if (arr[i] == candidate)
                votes++;
            else
                votes--;
        }
    }

    int count = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2)
        return candidate;

    return -1;
}

int main()
{
    int arr[] = {6, 8, 7, 6, 6};
    // int arr[] = {8, 8, 6, 6, 6};

    int majority = findMajorityElement(arr, 5);

    if (majority == -1)
        cout << "There is no majority element";
    else
        cout << majority << " is the majority element";

    return 0;
}