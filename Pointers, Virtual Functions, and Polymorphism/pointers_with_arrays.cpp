#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int i, num, *ptr;

    /* Assigning the address of the first array element, i.e. arr[0] to ptr. */
    ptr = arr;

    cout << "Enter element to be searched: ";
    cin >> num;

    for (i = 0; i < 5; i++)
    {
        if (*ptr == num)
        {
            cout << "\n\n"
                 << num << " is present in the array";
            break;
        }

        else if (i == 4) // reached the end of the array
            cout << "\n\n"
                 << num << " is not present in the array.";

        ptr++; // incrementing the ptr value by 1 to point to the next array element.
    }

    return 0;
}