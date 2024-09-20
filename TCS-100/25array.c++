// Check if array is subset of another array

#include <bits/stdc++.h>
using namespace std;

// bool checkSubset(vector<int> &arr, vector<int> &brr)
// {
//     if (arr.size() > brr.size())
//         return false;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         bool flag = false;
//         for (int j = 0; j < brr.size(); j++)
//         {
//             if (arr[i] == brr[j])
//             {
//                 flag = true;
//                 break;
//             }
//         }
//         if (flag == false)
//         {
//             return false;
//         }
//     }
//     return true;
// }
//----------------------------------------------------------------------------
// bool checkSubset(vector<int> &arr, vector<int> &brr)
// {
//     sort(arr.begin(), arr.end());
//     sort(brr.begin(), brr.end());

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (!binary_search(brr.begin(), brr.end(), arr[i]))
//         {
//             return false;
//         }
//     }
//     return true;
// }
//--------------------------------------------------------------------------

bool checkSubset(vector<int> &arr, vector<int> &brr)
{
    unordered_map<int, bool> mp;
    for (int i = 0; i < brr.size(); i++)
    {
        mp[brr[i]] = true;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (mp.count(arr[i]) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    vector<int> arr = {1, 2, 94, 5};
    vector<int> brr = {2, 4, 3, 1, 7, 5, 15};

    if (checkSubset(arr, brr))
    {
        cout << "YESSSS ";
    }
    else
    {
        cout << "NOOOOO";
    }

    return 0;
}