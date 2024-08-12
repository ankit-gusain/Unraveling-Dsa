
//program to print odd and even number of an array with recursion.

#include <bits/stdc++.h>
using namespace std;

void printOdd(int arr[], int size, int index)
{
    if (index == size)
        return;

    if (arr[index] & 1)
        cout << arr[index] << " ";

    printOdd(arr, size, index + 1);
}

void printEven(int arr[], int size, int index)
{
    if (index == size)
        return;

    if (!(arr[index] & 1))
        cout << arr[index] << " ";

    printEven(arr, size, index + 1);
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 10, 12, 14, 15, 19};
    int size = 10;
    int index = 0;
    printOdd(arr, size, index);
    cout << endl;
    printEven(arr, size, index);
}