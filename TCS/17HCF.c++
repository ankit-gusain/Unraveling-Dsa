#include <bits/stdc++.h>
using namespace std;

void hcf(int n1, int n2)
{
    int ans = 0;
    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            ans = i;
        }
    }
    cout << ans;
}

int gcd(int a, int b)
{
    if (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
        return b;
    if (b == 0)
        return a;
}

int main()
{
    int n1;
    int n2;
    cin >> n1 >> n2;
    hcf(n1, n2);
    cout << gcd(n1, n2);
}
