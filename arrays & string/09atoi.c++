
// atoi

#include <bits/stdc++.h>
using namespace std;

int myatoi(string s)
{
    int num = 0;
    int i = 0;
    int sign = 1; //+ve

    //  1. ignore leading space
    while (s[i] == ' ')
    {
        i++;
    }

    // 2. check sign
    if (i < s.size() && (s[i] == '-' || s[i] == '+'))
    {
        // sign = s[i] == '+' ? 1 : -1;
        if (s[i] == '+')
        {
            sign = 1;
        }
        else
        {
            sign = -1;
        }
        i++;
    }
    while (i < s.size() && isdigit(s[i]))
    {
        if (num > INT_MAX / 10 || (num == INT_MAX / 10) && s[i] > '7')
        {
            // return sign == -1 ? INT_MIN : INT_MAX;
            if (sign == -1)
            {
                return INT_MIN;
            }
            else
            {
                return INT_MAX;
            }
        }
        num = num * 10 + (s[i] - '0');
        i++;
    }
    return num * sign;
}
int main()
{
    string s;
    cout << "enter the string :";
    getline(cin, s);

    cout << "entered string : ";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            cout << "_";
        }
        cout << s[i];
    }
    int ans = myatoi(s);
    cout << endl;

    cout << "Resultant integer : " << ans;
    return 0;
}
