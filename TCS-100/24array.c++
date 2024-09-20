// Search an Element in an Array

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int n, int key)
{
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{

    int t;
    cout << "Enter TC :";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "enter n :";
        cin >> n;

        cout << "array vals :";
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int key;
        cout << "enter key :";
        cin >> key;

        int ans = binarySearch(arr, n, key);
        cout << "found at idx :" << ans;
        ;
    }

    return 0;
}