// Problem Statement: Given an array of n size, rotate the array by k elements using the Block Swap Algorithm.

// Examples:

// Example 1:
// Input: N = 5, array[] = {1,2,3,4,5} K=2
// Output: {3,4,5,1,2}
// Explanation: Rotate the array to right by 2 elements.

// Example 2:
// Input: N = 7, array[] = {1,2,3,4,5,6,7} K=3
// Output: {4,5,6,7,1,2,3}
// Explanation: Rotate the array to right by 3 elements.

#include <bits/stdc++.h>
using namespace std;

void RotateByK(int arr[], int n, int k)
{
    int limit = k;
    int i = 0;
    while (k < n)
    {
        if (i == k + 1)
        {
            break;
        }

        swap(arr[i], arr[limit]);
        i++;
        limit++;
    }
}
int main()
{
    int n;
    cout << "enter size :";
    cin >> n;
    int k;
    cout << "enter k :";
    cin >> k;
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
    RotateByK(arr, n, k);

    cout << "\nArray: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}