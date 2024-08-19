/*
Problem statement: Given an array, we have found the number of occurrences of each element in the array.

Examples:

Example 1:
Input: arr[] = {10,5,10,15,10,5};
Output: 10  3
        5   2
        15  1
Explanation: 10 occurs 3 times in the array
              5 occurs 2 times in the array
             15 occurs 1 time in the array

Example2:
Input: arr[] = {2,2,3,4,4,2};
Output: 2  3
        3  1
        4  2
Explanation: 2 occurs 3 times in the array
             3 occurs 1 time in the array
             4 occurs 2 time in the array
*/

#include <bits/stdc++.h>
using namespace std;

void Solution(int arr[], int n)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto it : mp)
    {
        cout << "element : " << it.first << " | ";
        cout << "occurance : " << it.second;
        cout << endl;
    }
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
    cout << endl;
    Solution(arr, n);
}