// seive of eratosthesnes for count primes

#include <bits/stdc++.h>
using namespace std;

vector<bool> CountPrimeWithSeiveOfEratosthenes(int n)
{
    vector<bool> arr(n + 1, true);
    arr[0] = arr[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == true)
        {
            int j = i * 2;
            while (j <= n)
            {
                arr[j] = false;
                j += i;
            }
        }
    }
    return arr;
}
int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;

    vector<bool> seive = CountPrimeWithSeiveOfEratosthenes(n);

    cout << "prime number till " << n << " : ";
    for (int i = 0; i < seive.size(); i++)
    {
        if (seive[i] == true)
            cout << i << " ";
    }
    return 0;
}