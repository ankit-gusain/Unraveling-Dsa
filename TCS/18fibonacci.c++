#include <bits/stdc++.h>
using namespace std;

void fib(int n)
{
    int a = 0, b = 1;
    int c = 0;

    cout << a << " " << b << " ";

    while (n--)
    {
        c = a + b;
        a = b;
        b = c;

        cout << c << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    fib(n);
}
