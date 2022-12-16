#include <iostream>

using namespace std;

bool checkPalindrome(string str, int start, int end)
{
    if (start >= end) // Only if it is a palindrome,'start' will cross 'end' while going from left to right
        return true;

    return ((str[start] == str[end]) && checkPalindrome(str, ++start, --end));
}

int main()
{
    string str = "racecar";
    string result = checkPalindrome(str, 0, str.length() - 1) ? "true" : "false";

    cout << "Is " << str << " a palindrome? " << result;

    return 0;
}