#include<bits/stdc++.h>
using namespace std;

void takeinp(vector<int>& arr, string s){
char c;
stringstream ss(s);
while(ss>>c){
    if(isdigit(c) || (c == '-' && isdigit(ss.peek()))){

        ss.putback(c);
        int n;
        ss>>n;
        arr.push_back(n);
    }
}
} 

void remove(vector<int>& arr,int n)
{
    for(int i=0;i<n;i++){
        if(arr[i]==-1) continue;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]==-1)continue;
        cout<<arr[i]<<" ";
    }

}
int main(){
    
    vector<int> arr;
    string s;
    getline(cin,s);
    takeinp(arr,s);

    int n =arr.size();
    
    remove(arr,n);

}