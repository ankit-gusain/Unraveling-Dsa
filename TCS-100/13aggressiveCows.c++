/*

Aggresive Cows

Problem Statement: You are given an array 'arr' of size 'n' which denotes the position of stalls.
You are also given an integer 'k' which denotes the number of aggressive cows.
You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.
Find the maximum possible minimum distance.

Examples
Example 1:
Input Format:
 N = 6, k = 4, arr[] = {0,3,4,7,10,9}
Result:
 3
Explanation:
 The maximum possible minimum distance between any two cows will be 3 when 4 cows are placed at positions {0, 3, 7, 10}. Here the distances between cows are 3, 4, and 3 respectively. We cannot make the minimum distance greater than 3 in any ways.

Example 2:
Input Format:
 N = 5, k = 2, arr[] = {4,2,1,3,6}
Result:
 5
*/

#include <bits/stdc++.h>
using namespace std;

bool isPossibleSol(vector<int> &stalls, int NoOfCow, int mid)
{

    int c = 1;
    int pos = stalls[0]; // 1st position ko define kr rhe hai
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - pos >= mid) // agr diffrence mid ya usse jyda hai then
        {
            c++;             // counter bda denge
            pos = stalls[i]; // ek or cow ko place kr diya hai
        }
        if (c == NoOfCow) // agr sari cows ko place krdiya hai to true
            return true;
    }
    return false;
}

int solve(int n, int k, vector<int> &stalls)
{
    sort(stalls.begin(), stalls.end()); // sorting the order

    int start = 0;
    int end = stalls[stalls.size() - 1] - stalls[0]; // last - first krte hi search space aajayega

    int ans = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (isPossibleSol(stalls, k, mid)) // agr true hai then mid ko store kro or next possible ans pe jaao dhundho
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans; // return kro jha mil rha ho yani ans ko
}

int main()
{
    int t; // number of test cases
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;           // size
        vector<int> arr(n); // piles
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int noOfCows;
        cin >> noOfCows; // cows

        int ans = solve(n, noOfCows, arr);
        cout << ans;
    }

    return 0;
}