#include <bits/stdc++.h>
using namespace std;

void findDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i;
            if (i < n)
            {
                cout << ",";
            }
        }
    }
}

int main()
{

    int n;
    cin >> n;
    findDivisors(n);
}       