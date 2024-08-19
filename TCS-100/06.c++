/*
Problem Statement: Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order

Examples:

Example 1:
Input: 8 7 1 6 5 9
Output: 1 5 6 9 8 7
Explanation: First three elements are in the ascending order and next three elements are in the descending order.

Example 2:
Input: 4 2 8 6 15 5 9 20
Output: 2 4 5 6 20 15 9 8

*/

#include <bits/stdc++.h>

using namespace std;
void cusomizedSort(int arr[], int n)
{
    sort(arr, arr + n); // 1 2 3 4 5 6 7 8 9
    int mid = (n) / 2;

    reverse(arr + mid, arr + n);
}

int main()
{
    int n;
    cout << "enter size :";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter element " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "\nArray: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cusomizedSort(arr, n);
    cout << "\nArray: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
