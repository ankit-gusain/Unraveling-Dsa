
//program to minimum element in an array with recursion.


#include <bits/stdc++.h>
using namespace std;

int getMinimum(int arr[], int size, int index, int &mini)
{
    if (size == index)
        return mini;

    mini = min(mini, arr[index]);

    getMinimum(arr, size, index + 1, mini);
    return mini;
}
int main()
{
    int arr[] = {100, 21, 113, 100, 24, 18, 18};
    int n = 8;
    int i = 0;
    int mini = INT_MAX;
    int ans = getMinimum(arr, n, i, mini);
    cout << "minimum element" << ans;
}