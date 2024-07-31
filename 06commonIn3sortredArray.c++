#include <bits/stdc++.h>
using namespace std;

vector<int> commonElements(vector<int> &arr, vector<int> &brr, vector<int> &crr, int n1, int n2, int n3)
{
    vector<int> ans;
    set<int> st;
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (arr[i] == brr[j] == crr[k])
        {
            st.insert(arr[i]);
            i++;
            j++;
            k++;
        }
        else if (arr[i] < brr[j])
        {
            i++;
        }
        else if (brr[j] < crr[k])
        {
            j++;
        }
        else
            k++;
    }
    for (auto it : st)
    {
        ans.push_back(it);
    }
    return ans;
}
int main()
{
    int n1, n2, n3;
    cout << "enter the sizes of all the array";
    cin >> n1 >> n2 >> n3;

    vector<int> arr(n1);

    cout << " enter the values for array1 :\n";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr[i];
    }
    cout << "\n enter the values for array2 :\n";

    vector<int> brr(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> brr[i];
    }

    cout << "\n enter the values for array3 :\n";
    vector<int> crr(n3);
    for (int i = 0; i < n3; i++)
    {
        cin >> crr[i];
    }

    // displaying
    cout << "array :\n";

    for (int i = 0; i < n1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n2; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n3; i++)
    {
        cout << crr[i] << " ";
    }

    vector<int> common = commonElements(arr, brr, crr, n1, n2, n3);

    cout << "\n Common elements in 3 array are : ";
    for (int i = 0; i < common.size(); i++)
    {
        cout << common[i] << " ";
    }
    return 0;
}