#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str, int s, int e)
{
    if (s >= e)
        return true;

    if (s != e)
        return false;

    return isPalindrome(str, s + 1, e - 1);
}

int main()
{
    string str;
    getline(cin, str);
    cout << str;
    int s = 0;
    int e = str.length() - 1;
    cout << isPalindrome(str, s, e);
    return 0;
}