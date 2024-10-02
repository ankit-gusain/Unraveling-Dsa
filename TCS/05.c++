    #include <bits/stdc++.h>
    using namespace std;

    void takeinp(vector<int>& arr, string s) {
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
    }

    bool isSubset(const vector<int>& arr1, const vector<int>& arr2) {
        unordered_map<int, bool> mp;
        for (int num : arr2) {
            mp[num] = true;
        }
        for (int num : arr1) {
            if (mp.count(num) == 0) {
                return false;
            }
        }
        return true;
    }

    int main() {
        vector<int> arr1;
        vector<int> arr2;
        string s;

        // Read input for first array
        cout << "Enter elements for array 1 (space-separated): ";
        getline(cin, s);
        takeinp(arr1, s);

        // Read input for second array
        cout << "Enter elements for array 2 (space-separated): ";
        getline(cin, s);
        takeinp(arr2, s);

        cout << (isSubset(arr1, arr2) ? "True" : "False") << endl;

        return 0;
    }
