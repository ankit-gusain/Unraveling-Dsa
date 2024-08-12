#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &str_main)
{
    unordered_map<string, vector<string>> mp;
    for (auto str : str_main)
    {
        string s = str;
        sort(s.begin(), s.end());
        mp[s].push_back(str);
    }

    vector<vector<string>> ans;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        ans.push_back(it->second);
    }
    return ans;
}

int main()
{
    int noofstring;
    cout << "Enter the no of elements in string ";
    cin >> noofstring;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> str(noofstring);
    cout << "Enter the string :";
    for (int i = 0; i < noofstring; i++)
    {
        getline(cin, str[i]);
    }

    cout << "String :";
    cout << endl;

    for (int i = 0; i < noofstring; i++)
    {
        cout << str[i] << " ";
    }

    cout << endl;

    vector<vector<string>> group = groupAnagrams(str);
    cout << "Anagram Group : \n";

    for (const auto &row : group)
    {
        cout << "{ ";
        for (const auto &element : row)
        {
            cout << element << " ";
        }
        cout << "}";
        cout << endl;
    }
}