// compress the string

#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &str)
{
    vector<string> ans;
    int index = 0;
    int count = 0;
    char prev = str[0];

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == prev) // when both prev ans current are equal
        {
            count++; // increase the count
        }
        else
        {
            str[index] = prev;
            index++;

            if (count > 1)
            {
                int start = index;
                while (count)
                {
                    str[index++] = (count % 10) + '0';
                    count = count / 10;
                }
                reverse(str.begin() + start, str.begin() + index);
            }
            prev = str[i];
            count = 1;
        }
    }

    str[index++] = prev; // else the curr will point to prev and inc the idx
    if (count > 1)       // if count >1
    {
        int start = index;
        while (count)
        {
            str[index++] = (count % 10) + '0';
            count = count / 10;
        }
        reverse(str.begin() + start, str.begin() + index);
    }
    return index;
}

void insertInto(vector<char> &str, int size)
{
    cout << "enter the string : ";
    for (int i = 0; i < str.size(); i++)
    {
        cin >> str[i];
    }
    cout << endl;
}
void printBefore(vector<char> &str, int size)
{
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
}
void printAfter(vector<char> &str, int size)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == str[i + 1])
        {
            break;
        }
        cout << str[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "enter the size";
    cin >> size;
    vector<char> str(size);
    insertInto(str, size);
    printBefore(str, size);
    int ans = compress(str);
    printAfter(str, size);
}
