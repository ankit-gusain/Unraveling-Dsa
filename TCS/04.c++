#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char c = 'R';
    int x = 0, y = 0;
    int distance = 0;

    while (n)
    {
        switch (c)
        {
        case 'R':
            x = x + distance;
            distance += 10;
            c = 'U';
            break;

        case 'U':
            y = y + distance;
            distance += 10;
            c = 'L';
            break;

        case 'L':
            x = x - distance;
            distance += 10;
            c = 'D';
            break;

        case 'D':
            y = y - distance;
            distance += 10;
            c = 'A';
            break;

        case 'A':
            x = x + distance;
            distance += 10;
            c = 'R';
            break;
        }
        n--;
    }

    cout << x << y;
}
