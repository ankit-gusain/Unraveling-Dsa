/*
01
Problem Statement: Given an array, we have to find the smallest element in the array.

Examples:

        Example 1:
        Input: arr[] = {2,5,1,3,0};
        Output: 0
        Explanation: 0 is the smallest element in the array.

        Example2:
        Input: arr[] = {8,10,5,7,9};
        Output: 5
        Explanation: 5 is the smallest element in the array
*/

#include <bits/stdc++.h>

using namespace std;

void approach(int arr[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
    }
    cout << "\nminimum element :" << mini;
}

void stlMethod(int arr[], int n)
{
    int mini = *min_element(arr, arr + n);
    cout << "\nmininum element :" << mini;
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

    stlMethod(arr, n);
    approach(arr, n);
}