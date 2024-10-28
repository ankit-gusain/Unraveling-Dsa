#include <bits/stdc++.h>
using namespace std;

void anagramcheck(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2)
        cout << "anagrams";
    else
        cout << "not anagrams";
}
int main()
{
    string s1;
    getline(cin, s1);
    string s2;
    getline(cin, s2);
    anagramcheck(s1, s2);
}