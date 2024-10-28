#include <bits/stdc++.h>
using namespace std;

void solution(int n1, int n2)
{
    if (n1 - n2 < 0)
        cout << "not possible";
    else
    {
        string s1 = to_string(n1);
        string s2 = to_string(n2);
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        string ans;
        int carry = 0;

        for (int i = 0; i < max(s1.length(), s2.length()); i++)
        {
            char digit = '0';
            if (s1[i] - s2[i] < 0)
            {
                carry++;
                digit = ('1' + s1[i]) - s2[i];
                s1[i + 1] -= 1;
                ans += digit;
            }
            else
            {
                digit = s1[i] - s2[i];
                ans += digit;
            }
        }
    cout << carry << " : " << ans ;
    }
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    solution(n1, n2);
}