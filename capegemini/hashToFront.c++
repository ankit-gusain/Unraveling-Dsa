#include <bits/stdc++.h>
using namespace std;

void moveHashToFront(string &str)
{
    string ans;
    string ans1, ans2;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '#')
        {
            ans1.push_back(str[i]);
        }
        else
        {
            ans2.push_back(str[i]);
        }
    }

    ans = ans1 + ans2;
    cout << ans;
}
int main()
{

    string str;
    getline(cin, str);
    moveHashToFront(str);
}

// 1 2 # 1 2 # # 3 #