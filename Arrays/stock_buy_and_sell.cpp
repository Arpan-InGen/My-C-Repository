/* Program to calculate the profit earned by buying and selling a stock over a course of 5 days.
Let's assume these were the prices of the stock on days 1-5.

Day 1: $1
Day 2: $5
Day 3: $3
Day 4: $8
Day 5: $12

Mike bought the stock on Day 1 at $1 and sold it on Day 2 at $5. He made a profit of $4.
On Day 3, he noticed that the price had dropped to $3 and so, he bought it again.
On Day 4, he saw that the price has risen to $8 and thought of waiting a little more to sell it again for a higher profit.
Finally, on Day 5, he sold the stock at $12, thereby, making a profit of $13 ($4 + $12 - $3).
*/


#include <iostream>

using namespace std;

void calculateProfit(int arr[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += arr[i] - arr[i - 1];
        }
    }

    cout << "Total profit made by buying and selling the stock is " << profit;
}

int main()
{
    int stock_array[] = {1, 5, 3, 8, 12};

    calculateProfit(stock_array, 5);

    return 0;
}