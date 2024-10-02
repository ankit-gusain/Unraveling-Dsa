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

int palindromicNumbers(int N)
{
    int ans = 9;

    if (N < 10)
    {
        return N - 1;
    }

    for (int i = 10; i < N; i++)
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
    int n;
    cin >> n;
    int ans = palindromicNumbers(n);

    cout << ans;
    return 0;
}
