// reverse Vowels of a string

// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

// Example 1:

// Input: s = "hello"
// Output: "holle"
// Example 2:

// Input: s = "leetcode"
// Output: "leotcede"

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

string reverseVowels(string str)
{
    int l = 0;
    int h = str.size() - 1;

    while (l <h)
    {
        if (isVowel(str[l]) && isVowel(str[h]))
        {
            swap(str[l], str[h]);
            l++;
            h--;
        }

        else if (isVowel(str[l]) == 0)
        {
            l++;
        }
        else
            h--;
    }
    return str;
}
int main()
{
    string str;
    cout << "enter the string : ";
    cin >> str;

    cout << endl << str << endl;
    string reversedStr = reverseVowels(str);

    cout << reversedStr;
}