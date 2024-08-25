/*
Book allocation problem

Problem Statement: Given an array ‘arr of integer numbers, ‘ar[i]’ represents the number of pages in the ‘i-th’ book. There are a ‘m’ number of students, and the task is to allocate all the books to the students.
Allocate books in such a way that:

Each student gets at least one book.
Each book should be allocated to only one student.
Book allocation should be in a contiguous manner.
You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum. If the allocation of books is not possible. return -1

Examples
Example 1:
Input Format:
 n = 4, m = 2, arr[] = {12, 34, 67, 90}
Result:
113

*/

#include <bits/stdc++.h>
using namespace std;

bool isPossibleSoution(vector<int> &arr, int m, int mid)
{
    int pagesum = 0;
    int count = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }

        if (pagesum + arr[i] > mid)
        {
            count++;
            pagesum = arr[i];

            if (count > m)
            {
                return false;
            }
        }
        else
        {
            pagesum += arr[i];
        }
    }

    return true;
}

int bookAllocation(vector<int> &arr, int m)
{

    int start = 0;
    int end = accumulate(arr.begin(), arr.end(), 0);
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (isPossibleSoution(arr, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t; // testcases
    while (t--)
    {
        int n;
        cin >> n;           // size of arr
        vector<int> arr(n); // pages in book
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int m; // no of books
        cin >> m;

        cout << bookAllocation(arr, m);
    }
}