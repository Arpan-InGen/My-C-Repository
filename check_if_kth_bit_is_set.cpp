#include <iostream>

using namespace std;

void isKthBitSetR(int n, int k) // for Right Shift
{
    cout << "\nUsing Right Shift Bitwise Operation.\n";
    if ((n >> (k - 1)) & 1) // Shifting n right by k-1 bits and comparing its last bit (previously kth bit) with 1
        cout << k << "th bit is set.";
    else
        cout << k << "th bit is not set.";
}

void isKthBitSetL(int n, int k) // // for Left Shift
{
    cout << "\n\nUsing Left Shift Bitwise Operation.\n";
    if (n & (1 << (k - 1))) // Shifting 1 left by k-1 bits and comparing n's kth bit with 1
        cout << k << "th bit is set.";
    else
        cout << k << "th bit is not set.";
}

int main()
{
    int num, k, count = 1;
    cout << "Enter a number: ";
    cin >> num;
    cout << "\nEnter a value for k (to check for the kth bit): ";
    cin >> k;

    /* My solution using loop
    while (num)
    {   //cout<<"\n"<<num;
        //cout<<"\n"<<count;
        if (count == k)
        {
            if (num & 1)
            {
                cout << "\ntrue";
                return 0;
            }
        }
        num = num >> 1;
        count++;
    }

    cout << "\nfalse"; */

    isKthBitSetR(num, k);
    isKthBitSetL(num, k);
    return 0;
}