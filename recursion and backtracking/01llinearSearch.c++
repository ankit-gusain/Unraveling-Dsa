
//program to perform Linear search with recursion.

#include <bits/stdc++.h>
using namespace std;

void searcher(int arr[], int size, int index, int key)
{
    if (index == size)
    {
        cout << "not found";
        return;
    }

    if (arr[index] == key)
    {
        cout << "found at " << index + 1 << " position";
        return;  
    }

    searcher(arr, size, index + 1, key);
}

int main()
{
    int size = 5;
    int arr[size] = {10, 20, 30, 40, 60};
    int key = 90;

      
    searcher(arr, size, 0, key);
}
