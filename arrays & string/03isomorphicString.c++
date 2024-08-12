// Isomorphic Strings
 
// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters.
// No two characters may map to the same character, but a character may map to itself.

 

// Example 1:

// Input: s = "egg", t = "add"
// Output: true
// Example 2:

// Input: s = "foo", t = "bar"
// Output: false
// Example 3:

// Input: s = "paper", t = "title"
// Output: true
 




#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    if (s.length() != t.length())
        return false;

    char ArrS[256] = {0};
    char ArrT[256] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        if (ArrS[s[i]] == 0 || ArrT[t[i]] == 0)
        {
            ArrS[s[i]] = t[i];
            ArrT[t[i]] = s[i];
        }
        else if (ArrS[s[i]] != t[i] || ArrT[t[i]] != s[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    string t;

    cout << "enter the string S : ";
    cin >> s;

    cout << "enter the string T: ";
    cin >> t;

    bool checkIsomorphic = isIsomorphic(s, t);

    if (checkIsomorphic)
    {
        cout << "strings " << s << " and " << t << " are isomorphic";
    }
    else
    {
        cout << "strings " << s << " and " << t << " are NOT Isomorphic";
    }
}