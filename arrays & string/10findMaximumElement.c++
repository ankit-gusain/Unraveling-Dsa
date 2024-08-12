#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    std::vector < int > nums(n);
    for (int i = 0; i < nums.size(); i++) {
        cin >> nums[i];
    } 
    int max = *max_element(nums.begin(),nums.end());
    cout << "max element"<<max;
}
// 1
// 5
// 4
// 7
// 6
// 3
// 1