#include <bits/stdc++.h>

using namespace std;

bool checkVirus(string str)
{
    for (int i = 0; i < str.length() - 2; i++)
    {
        if (str[i] != str[i + 2])
            return false;
    }
    return true;
}

int main()
{
    string str;
    getline(cin, str);
    cout << str;

    if (checkVirus(str))
    {
        cout << endl
             << "1";
    }
    else
    {
        cout << endl
             << "0";
    }
}