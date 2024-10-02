#include <bits/stdc++.h>
using namespace std;

void printsubseqences(int index, int arr[], vector<int> &ds, int n)
{
    if (index == n)
    {
        for (int val : ds)
        {
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    ds.push_back(arr[index]);
    printsubseqences(index + 1, arr, ds, n);
    ds.pop_back();

    printsubseqences(index + 1, arr, ds, n);
}

int main()
{
    int arr[] = {3, 1, 2};
    vector<int> ds;
    int n = 3;
    printsubseqences(0, arr, ds, n);
}