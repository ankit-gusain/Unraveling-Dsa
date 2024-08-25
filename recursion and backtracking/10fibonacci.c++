
// printing fibonacci series with recursion

#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;

    int series = fib(n - 1) + fib(n - 2);

    return series;
}
int main()
{
    int n;
    cout << "enter n ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << " ";
    }

    return 0;
}