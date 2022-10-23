#include <iostream>

using namespace std;

class employee
{
    string name;
    int age;

public:
    void getData();
    void showData();
};

void employee::getData()
{
    cout << "\nEnter name: ";
    cin >> name;
    cout << "\nEnter age: ";
    cin >> age;
}

void employee::showData()
{
    cout << "\nName: " << name;
    cout << "\nAge: " << age << "\n";
}

int main()
{
    const int size = 2;
    int i;

    employee manager[size]; // declaring an array of objects

    for (i = 0; i < size; i++)
    {
        cout << "\nPlease enter details of manager " << i + 1 << "\n";
        manager[i].getData();
    }

    for (i = 0; i < size; i++)
    {
        cout << "\nDetails of manager " << i + 1 << "\n";
        manager[i].showData();
    }

    return 0;
}