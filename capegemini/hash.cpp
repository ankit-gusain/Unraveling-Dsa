#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "Move#To#The#New#World";
    int cnt = 0;
    string ans = "";
    for(auto ch: str){
        if(ch == '#'){
            cnt++;
        }
        else{
            ans += ch;
        }
    }
    string hash = "";
    while(cnt--){
        hash += '#';
    }

    cout<<hash+ans;

    return 0;
}