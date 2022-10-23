#include <iostream>

using namespace std;

class item
{
    string code;
    float price;

public:
    void setData(string c, float p)
    {
        code = c;
        price = p;
    }

    void showData()
    {
        cout << "\nCode: " << code;
        cout << "\nPrice: " << price << "\n";
    }
};

int main()
{
    const int size = 2;

    item *ptr1 = new item[size]; // declare an array of objects
    item *ptr2 = ptr1;

    int i;
    string c;
    float p;

    for (i = 1; i <= size; i++)
    {
        cout << "\nEnter code and price for item " << i << "\n";
        cin >> c >> p;

        ptr1->setData(c, p); // accessing the member function setData
        ptr1++;
    }

    for (i = 1; i <= size; i++)
    {
        cout << "\nItem " << i;
        ptr2->showData();
        ptr2++;
    }

    return 0;
}