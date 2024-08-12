
// program to maximum element in an array with recursion.

#include <bits/stdc++.h>
using namespace std;

void getMax(int arr[], int size, int index, int &maxi)
{
    if (index == size)
    {
        return;
    }
    maxi = max(maxi, arr[index]);

    getMax(arr, size, index + 1, maxi);
}

int main()
{
    int arr[] = {1, 2, 3, 10, 4, 7, 8};
    int n = 8;
    int i = 0;
    int maxi = INT_MIN;
    getMax(arr, n, i, maxi);
    cout << "Maximum Element : " << maxi;
}