#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> &arr, int n)
{

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int dup = arr.size() - mpp.size();
    cout << "to delete : "<<dup;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    solution(arr, n);
    return 0;
}