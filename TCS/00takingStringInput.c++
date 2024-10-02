#include<bits/stdc++.h>
using namespace std;

void takeinp(string &inp, vector<int> &num, vector<float> &decimal, vector<string> &str){
    stringstream ss(inp);
    string entry;

    while(getline(ss,entry,';')){
        stringstream entrystream(entry);   


        string n,d,s;
        getline(entrystream,n,',');
        num.push_back(stoi(n));

        getline(entrystream,d,',');
        decimal.push_back(stof(d));

        getline(entrystream,s,',');
        str.push_back(s);


    }

    for(int i=0;i<num.size();i++)
    {
        cout<<num[i]<<" ";
        cout<<decimal[i]<<" ";
        cout<<str[i]<<" ";
        cout<<endl;

        

    }

}
int main(){
    string inp;
    vector<int>num;
    vector<float>decimals;
    vector<string>str;

    getline(cin,inp);
    takeinp(inp,num,decimals,str);
}