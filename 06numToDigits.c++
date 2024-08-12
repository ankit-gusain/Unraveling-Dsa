
// program to convert a number to its consective digits with recursion.

#include <bits/stdc++.h>
using namespace std;

void numToDigits(int num)
{
    // bc
    if (num == 0)
        return;

    numToDigits(num / 10);

    // 1case
    int digit = num % 10;
    cout << "\n digits are   : " << digit << " ";
}
int main()
{
    int num = 2921;
    cout << "number : " << num;
    numToDigits(num);
}