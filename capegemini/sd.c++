#include <bits/stdc++.h>
using namespace std;

void findsd(vector<int> arr, int n)
{
    double sd = 0;
    double avg = accumulate(arr.begin(), arr.end(), 0.0) / n;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ((arr[i] - avg) * (arr[i] - avg));
    }

    double var = sum / n;
    sd = sqrt(var);

    cout << "sd :" << sd;
}

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    findsd(arr, n);
}