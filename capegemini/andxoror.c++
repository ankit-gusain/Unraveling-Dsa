

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "1C0C1C1A0B1";
    cout << str << endl;
    for (int i = 1; i < str.length() - 1; i++)
    {
        if (str[i] == 'C')
        {
            int ch = (str[i + 1] - '0') ^ (str[i - 1] - '0');
            str[i + 1] = (ch % 10) + '0'; // Ensure it's a valid single digit
        }

        if (str[i] == 'A')
        {
            int ch = (str[i + 1] - '0') & (str[i - 1] - '0');
            str[i + 1] = (ch % 10) + '0'; // Ensure it's a valid single digit
        }

        if (str[i] == 'B')
        {
            int ch = (str[i + 1] - '0') | (str[i - 1] - '0');
            str[i + 1] = (ch % 10) + '0'; // Ensure it's a valid single digit
        }
    }
    cout << str[str.length() - 1];
    return 0;
}
