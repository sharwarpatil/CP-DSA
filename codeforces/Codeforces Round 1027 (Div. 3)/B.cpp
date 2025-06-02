#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        string s;
        cin >> s;
        
        int zeros = 0, ones = 0;
        for (char c : s) {
            if (c == '0') zeros++;
            else ones++;
        }
        
        int total_pairs = n / 2;
        int mixed_pairs_needed = total_pairs - k;
        
        
        if (mixed_pairs_needed > min(zeros, ones)) {
            cout << "NO"<<endl;
            continue;
        }
        
        int remaining_zeros = zeros - mixed_pairs_needed;
        int remaining_ones = ones - mixed_pairs_needed;
        
        int max_possible = remaining_zeros / 2 + remaining_ones / 2;
        
        if (max_possible >= k) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }
    
    return 0;
}