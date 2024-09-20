#include <bits/stdc++.h>
using namespace std;

void findSubsets(vector<int> &arr, int index, vector<int> &subsetArr, vector<vector<int>> &ans)
{
    // base case
    if (index == arr.size()) 
    {
        ans.push_back(subsetArr);
        return;
    }


    // pick
    subsetArr.push_back(arr[index]);
    findSubsets(arr, index + 1, subsetArr, ans);
    subsetArr.pop_back();

    // notpick
    findSubsets(arr, index + 1, subsetArr, ans);
}

void subsets(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;
    vector<int> subsetArr;

    findSubsets(arr, 0, subsetArr, ans);

    cout << "\nSubsets are:" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << i + 1 << " : ";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t; // number of test cases
    cin >> t;
    while (t--)
    {
        int n; // number of elements in array
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        subsets(arr);
    }
}