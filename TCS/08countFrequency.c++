#include<bits/stdc++.h>
using namespace std;

void takeinp(vector<int> &arr, string s)
{
    char c;
    stringstream ss(s);
    while(ss>>c){
        if(isdigit(c) || ( c=='-' && isdigit(ss.peek()))){
            ss.putback(c);
            int n;
            ss>>n;
            arr.push_back(n);
        }
    }
}

void countfreq(vector<int> &arr, int n){
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<" "<<endl;
    }
}

int main()
{
    string s;
    vector<int> arr;
    getline (cin,s);
    takeinp(arr,s);

    int n =arr.size();
    countfreq(arr,n);

}