#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int check = n;  
    int lastdigit = 0;
    int sum = 0;

    while (n > 0) {
        lastdigit = n % 10;
        sum += lastdigit * lastdigit * lastdigit;  
        n = n / 10;
    }

    if (sum == check) {
        cout<<"True";
    } else {
        cout<<"false";
    }

    return 0;
}
    