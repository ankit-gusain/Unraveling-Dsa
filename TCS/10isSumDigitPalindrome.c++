#include <bits/stdc++.h>
using namespace std;

int isSumDigitPalindrome(int n)
{
    int sum = 0;
    int digit = 0;
    while (n > 0)
    {
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }

    int sumdigit = 0;
    vector<int> arr;
    while (sum > 0)
    {
        sumdigit = sum % 10;
        arr.push_back(sumdigit);
        sum = sum / 10;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != arr[arr.size() - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;

    int ans = isSumDigitPalindrome(n);
    cout << ans;
}