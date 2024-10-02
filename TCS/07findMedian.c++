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

void findmedian(vector<int> &arr, int n){
   float med =0.0;
   sort(arr.begin(),arr.end()); 
   
   if(n%2 == 0){
        med = (arr[n/2]+arr[(n/2)-1])/2.0;     
    }
    else{
        med = arr[n/2];
    }
    cout<<med;
}

int main()
{
    string s;
    vector<int> arr;
    getline (cin,s);
    takeinp(arr,s);

    int n =arr.size();
    findmedian(arr,n);

}