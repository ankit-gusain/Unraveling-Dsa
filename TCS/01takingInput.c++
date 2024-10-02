// space seperated / new line input and n is not given ----------------
// input : 5 5 4 6 2
// outpt : 5 5 4 6 2

#include <bits/stdc++.h>
using namespace std;

/*
int main()
{
    vector<int> nums;
    int num;
    while (cin >> num)
    {
        nums.push_back(num);
    }
    for (int n : nums)
    {
        cout << n << "";
    }
}
-------------------------------------------
*/

/*
//  inp : abcd efg hij klm nop
//  oup : abcd efg hij klm nop

int main()
{
    string s;
    getline(cin, s);

    cout<<s;
}
--------------------------------------------
*/

/*

// inp : abc, 12
// oup : abc
         12

int main()
{
    string str;
    getline(cin,str);
    int index = 0;
    while(str[index]!=','){
        index++;
    }

    cout<<str.substr(0,index);

    cout<<(double)str.substr(index+1,str.size-index);
}
-------------------------------------------
*/

/*
int main()
{
    string s = "anvo";

    transform(s.begin(), s.end(), s.begin(), ::toupper);  //ANVO
    cout << s;
}
--------------------------------------------
*/

