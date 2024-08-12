
// program to perform binary search with recursion.

#include <bits/stdc++.h>
using namespace std;

void recursiveBinarySearch(int arr[], int n, int s, int e, int key)
{
    if (s > e)
        return;
    int mid = (s + e) / 2;

    if (arr[mid] == key)
    {
        cout << key << " found at pos : " << mid;
        return;
    }
    else if (key > arr[mid])
    {
        recursiveBinarySearch(arr, n, s + 1, e, key);
    }

    else
    {
        recursiveBinarySearch(arr, n, s, mid - 1, key);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int key = 8;
    int start = 0;
    int end = n - 1;
    recursiveBinarySearch(arr, n, start, end, key);
}