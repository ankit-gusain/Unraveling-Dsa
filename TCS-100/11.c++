/*
Problem Statement: Given an integer array arr of size N, sorted in ascending order (with distinct values). Now the array is rotated between 1 to N times which is unknown. Find the minimum element in the array.

Pre-requisites: Search in Rotated Sorted Array I,  Search in Rotated Sorted Array II & Binary Search algorithm

Examples
Example 1:
Input Format:
 arr = [4,5,6,7,0,1,2,3]
Result:
 0
Explanation:
 Here, the element 0 is the minimum element in the array.

Example 2:
Input Format:
 arr = [3,4,5,1,2]
Result:
 1
Explanation:
 Here, the element 1 is the minimum element in the array.
*/

#include <bits/stdc++.h>
using namespace std;

int findmin(vector<int> &arr)
{

    // m1:
    // int ans = *min_element(nums.begin(), nums.end());

    // m2:
    // sort(nums.begin(), nums.end());
    // int ans = nums[0];

    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        // Check if mid is less than its next if mid is the smallest element
        if (arr[mid] > arr[end]) // you can check also with mid+1 as they are in sorted orderF
        {
            start = mid + 1; // Minimum is in the right part
        }
        else
        {
            end = mid; // Minimum is in the left part including mid
        }
    }

    return arr[start]; // start should be the index of the minimum element
}

int main()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        int n;
        cin >> n;           // Size of the array
        vector<int> arr(n); // Initialize vector with size n
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << findmin(arr) << endl; // Print the result of findmin
    }

    return 0;
}