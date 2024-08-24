#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str, int s, int e)
{
    if (s > e)
        return;

    swap(str[s], str[e]);

    reverseString(str, s + 1, e - 1);
}
int main()
{
    string str;
    cout << "enter the string : ";
    getline(cin, str);
    int s = 0;
    int e = str.length()-1;

    cout << "Original string : " << str;
    reverseString(str, s, e);
    cout << endl;
    cout << "Reversed string : " << str;
}