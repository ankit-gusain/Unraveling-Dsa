/*
03
Problem Statement: Given an array, find the second largest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

        Examples
            Example 1:
            Input:
            [1,2,4,7,7,5]
            Output:
            Second largest : 2
            Second Largest : 5
            Explanation:
            The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second largest is 2

            Example 2:
            Input:
            [1]
            Output:
            Second largest : -1
            Second Largest : -1
            Explanation:
            Since there is only one element in the array, it is the largest and largest element present in the array. There is no second largest or second largest element present.
*/

#include <bits/stdc++.h>
using namespace std;

void method1(int arr[], int n)
{
    sort(arr, arr + n);
    cout << "\n2nd largest element :" << arr[n - 2];
    cout << "\n2nd largest element :" << arr[1];
}

void find2ndLargest(int arr[], int n)
{

    int largest = arr[0];
    int slargest = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }

        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }

    cout << "\nsecond largest " << slargest;
}

void find2ndSmallest(int arr[], int n)
{
    int smallest = arr[0];
    int ssmallest = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }

        else if (arr[i] < smallest && arr[i] > ssmallest)
        {
            ssmallest = arr[i];
        }
    }

    cout << "\nsecond smallest :" << ssmallest;
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

    find2ndSmallest(arr, n);
    find2ndLargest(arr, n);

    return 0;
}