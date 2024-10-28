#include <bits/stdc++.h>
using namespace std;

void LCP(vector<string> strs)
{
    string ans = "";
    int i = 0;

    while (true)
    {
        char currchar = 0;

        for (auto str : strs)
        {
            if (i >= str.size())
            {
                currchar = 0;
                break;
            }
            
            if (currchar == 0)
            {
                currchar = str[i]; 
            }

            else if (currchar != str[i])
            {
                currchar = 0;
                break;
            }
        }
        if (currchar == 0)
        { 
            break;
        }
        
        ans.push_back(currchar);
        i++;
    }
    cout<<"ans: "<<ans;
}

int main()
{
    vector<string> strs = {"abc", "abcd", "abce"};
    LCP(strs);
}