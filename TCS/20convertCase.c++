#include <bits/stdc++.h>

using namespace std;

void changeCase(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            s[i] = toupper(s[i]);
        }
        else if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
}

int main()
{
    string s;
    getline(cin, s);
    changeCase(s);
}
