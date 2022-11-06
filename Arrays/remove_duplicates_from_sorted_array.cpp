#include <iostream>

using namespace std;

void removeDuplicates(int arr[], int n)
{
    int new_size = 1, i, k;

    for (i = 1; i < n; i++)
    {
        if (arr[new_size - 1] != arr[i])
        {
            arr[new_size] = arr[i];
            new_size++;
        }

        cout << "\nIteration " << i << ": i= " << i << ", new_size= " << new_size << " arr[]: ";
        for (k = 0; k < n; k++)
            cout << arr[k] << " ";
    }

    cout << "\n\nAfter removal of duplicates: ";

    for (i = 0; i < new_size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    //int arr[] = {10,20,20,30,30};

    cout << "Before removal of duplicates: ";

    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";

    cout << "\n";

    removeDuplicates(arr, 7);

    return 0;
}

/*

Let's trace through an iteration

arr[] = {10,20,20,30,30}, n = 5, new_size = 1

Iteration 1: i= 1, new_size= 2 arr[]: 10 20 20 30 30        
Iteration 2: i= 2, new_size= 2 arr[]: 10 20 20 30 30        
Iteration 3: i= 3, new_size= 3 arr[]: 10 20 30 30 30        
Iteration 4: i= 4, new_size= 3 arr[]: 10 20 30 30 30   

*/