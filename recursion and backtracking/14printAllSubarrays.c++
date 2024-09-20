#include <bits/stdc++.h>
using namespace std;

void printSubArrays(vector<int> &arr, int start, int end)
{
    if (end == arr.size())
    {
        return;
    }
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    printSubArrays(arr, start, end + 1);
}

void helper(vector<int> &arr)
{
    cout << "sub arrays are" << endl;
    for (int s = 0; s < arr.size(); s++)
    {
        int e = s;
        printSubArrays(arr, s, e);
    }
}
int main()
{
    int t; // number of test cases
    cin >> t;
    while (t--)
    {
        int n; // size of array
        cin >> n;
        vector<int> arr(n); // array
        for (int i = 0; i < arr.size(); i++)
        {
            cin >> arr[i];
        }
        helper(arr);
    }
    return 0;
}
