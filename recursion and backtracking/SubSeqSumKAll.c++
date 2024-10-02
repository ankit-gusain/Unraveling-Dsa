#include <bits/stdc++.h>
using namespace std;

void printSSSK(int index, int arr[], vector<int> &ds, int n, int s, int sum)
{
    if (index == n)
    {
        if (s == sum)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    ds.push_back(arr[index]);
    s += arr[index];
    printSSSK(index + 1, arr, ds, n, s, sum);
    ds.pop_back();
    s -= arr[index];

    printSSSK(index + 1, arr, ds, n, s, sum);
}
int main()
{
    int n = 3;
    int arr[] = {1, 2, 1};
    vector<int> ds;
    int sum = 2;
    printSSSK(0, arr, ds, n, 0, sum);
}