    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        vector<int> arr;
        string s;
        getline(cin, s);
        stringstream ss(s);
        char c;

        while (ss >> c) {
    
            if (isdigit(c) || (c == '-' && isdigit(ss.peek()))) {
                ss.putback(c);   
                int n;
                ss >> n;         
                arr.push_back(n);
            } 
        }

        for (auto num : arr) {
            cout << num << endl;
        }

        return 0;
    }
