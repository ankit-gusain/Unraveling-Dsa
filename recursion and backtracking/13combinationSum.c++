#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int index, int targetSum, vector<vector<int>> &ans, vector<int> &ds)
{
    // base case
    if (index == arr.size())  
    {
        if (targetSum == 0) 
        {
            ans.push_back(ds);
        }
        return;
    }

    // pick
    if (arr[index] <= targetSum)
    {
        ds.push_back(arr[index]);
        solve(arr, index, targetSum - arr[index], ans, ds);
        ds.pop_back();
    }

    // non-pick
    solve(arr, index + 1, targetSum, ans, ds);
}

void combinationSum(vector<int> &arr, int target)
{
    vector<vector<int>> ans;
    vector<int> ds;

    solve(arr, 0, target, ans, ds);

    cout << "pairs are" << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout << i + 1 << ": ";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
        }
}

int main()
{
    int t; // test cases
    cin >> t;
    while (t--)
    {
        int n; // size of array
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < arr.size(); i++)
        {
            cin >> arr[i]; // input array
        }

        int target; // target sum
        cin >> target;
        combinationSum(arr, target);
        return 0;
    }
}