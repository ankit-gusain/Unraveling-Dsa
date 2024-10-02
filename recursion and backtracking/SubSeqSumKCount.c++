#include <bits/stdc++.h>
using namespace std;

int printSSSK(int index, int arr[], int n, int s, int sum)
{
    if (index == n)
    {
        if (s == sum)
        {
            return 1;
        }
        return 0;
    }

    s += arr[index];
    int l = printSSSK(index + 1, arr, n, s, sum);
    s -= arr[index];

    int r = printSSSK(index + 1, arr, n, s, sum);

    return l + r;
}

int main()
{
    int n = 3;
    int arr[] = {1, 2, 1};
    int sum = 2;
    cout << printSSSK(0, arr, n, 0, sum);
} 