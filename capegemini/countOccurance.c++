#include <bits/stdc++.h>
using namespace std;

void countOccurance(string &str)
{
    map<char, int> mpp;
    for (int i = 0; i < str.length(); i++)
    {
        mpp[str[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            cout << it.first;
        }
        else
        {
            cout << it.first << it.second;
        }
    }
}
int main()
{

    string str;
    getline(cin, str);
    countOccurance(str);
}
