#include <iostream>

using namespace std;

void findLeadersL2R(int arr[], int n)
{
    int flag;

    cout << "\nLeaders in the array are (Left to Right) - ";

    for (int i = 0; i < n; i++)
    {
        flag = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            cout << arr[i] << " ";
    }
}

void findLeadersR2L(int arr[], int n)
{
    int current_leader = arr[n - 1];

    cout << "\nLeaders in the array are (Right to Left) - " << current_leader;

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > current_leader)
        {
            current_leader = arr[i];
            cout << " " << current_leader;
        }
    }
}

int main()
{
    int arr[] = {8, 10, 4, 6, 5, 2};

    findLeadersL2R(arr, 6);
    findLeadersR2L(arr, 6);

    return 0;
}