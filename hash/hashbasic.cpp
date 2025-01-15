#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }

    // Determine the maximum possible value in the array for hash size
    int maxValue = 0;
    for (int i = 0; i < n; i++) {
        maxValue = max(maxValue, a[i]);
    }

    vector<int> hash(maxValue + 1, 0);
    for (int i = 0; i < n; i++) {
        hash[a[i]] += 1;
    }

    // Handle queries
    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        if (number <= maxValue) {
            cout << hash[number] << endl; // Output frequency
        } else {
            cout << 0 << endl; // Number not in the hash range
        }
    }

    return 0;
}
