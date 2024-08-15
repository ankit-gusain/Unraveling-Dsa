#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
    if (start >= end) // Base case:  
        return;

    swap(arr[start], arr[end]); // Swap the elements
    reverse(arr, start + 1, end - 1); // Recur for the next pair
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    int arr[n];
    cout << "Enter the values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int start = 0;
    int end = n - 1;
    reverse(arr, start, end);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
