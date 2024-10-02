#include <bits/stdc++.h>
using namespace std;

void takeinp(vector<int> &arr, string s)
{
    stringstream ss(s);
    char c;

    while (ss >> c)
    {

        if (isdigit(c) || (c == '-' && isdigit(ss.peek())))
        {
            ss.putback(c);
            int n;
            ss >> n;
            arr.push_back(n);
        }
    }
}

void Twosum(vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int sum = arr[i] + arr[j];

        if (sum == target)
        {
            cout << arr[i] << " " << arr[j] << endl;
            i++;
            j--;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    string s;
    vector<int> arr;
    getline(cin, s);
    takeinp(arr, s);

    int target;
    cin >> target;
    Twosum(arr, target);

    return 0;
}
