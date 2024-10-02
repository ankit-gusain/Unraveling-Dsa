#include <bits/stdc++.h>
using namespace std;

void takeinp(vector<int> &arr, string s)
{
    char c;
    stringstream ss(s);
    while (ss >> c)
    {
        if (isdigit(c) || (c == '-' && isdigit(ss.peek())))
        {
            ss.putback(c);
            int n;
            ss >> n;
            arr.push_back(n);
        }
    }
}

void maxProduct(vector<int> &arr, int n)
{

    int pre = 1;
    int suf = 1;
    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (pre == 0)
            pre = 1;
        if (suf == 0)
            suf = 1;

        pre *= arr[i];
        suf *= arr[n - i - 1];
        ans = max(ans, max(pre, suf));
    }
    cout << ans;
}
int main()
{
    string s;
    vector<int> arr;
    getline(cin, s);
    takeinp(arr, s);

    int n = arr.size();
    maxProduct(arr, n);
}