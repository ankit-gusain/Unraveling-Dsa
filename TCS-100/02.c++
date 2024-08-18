/*
02
Problem Statement: Given an array, we have to find the largest element in the array.

Examples
        Example 1:
        Input:
        arr[] = {2,5,1,3,0};
        Output:
        5
        Explanation:
        5 is the largest element in the array.

        Example2:
        Input:
        arr[] = {8,10,5,7,9};
        Output:
        10
        Explanation:
        10 is the largest element in the array.

*/

#include <bits/stdc++.h>
using namespace std;

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

    int maxi = *max_element(arr, arr + n);

    cout << "\nMaximum Element :" << maxi;
}
