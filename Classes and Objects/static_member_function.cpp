#include <iostream>

using namespace std;

class test
{
    int number;
    static int count;

public:
    void setNumber()
    {
        number = ++count; // We write ++count instead of count++ so that the Object numbers start with 1, and not 0. 
    }

    void showNumber()
    {
        cout << "Object number: " << number << "\n";
    }

    static void showCount()
    {
        cout << "Count: " << count << "\n";
    }
};

int test::count;

int main()
{
    test t1, t2;

    t1.setNumber();
    t2.setNumber();

    test::showCount();

    test t3;
    t3.setNumber();

    test::showCount();

    t1.showNumber();
    t2.showNumber();
    t3.showNumber();

    return 0;
}