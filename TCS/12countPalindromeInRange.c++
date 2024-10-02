#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    string str = to_string(n);
    int len = str.size();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
            return false;
    }
    return true;
}

int palindromicNumbers(int min, int max)
{
    int ans = 0;

    for (int i = min; i < max; i++)
    {
        if (isPalindrome(i))
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    int min, max;
    cin >> min >> max;
    int ans = palindromicNumbers(min, max);

    cout << ans;
    return 0;
}
