#include <iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int countSetBits(int num) {
    int count = 0;
    while (num) {
        num &= (num - 1);
        count++;
    }
    return count;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        vector<int> k = p;
        sort(k.begin(), k.end());

        vector<int> cntorg, cntsrted;
        for (int num : p) {
            cntorg.push_back(countSetBits(num));
        }
        for (int num : k) {
            cntsrted.push_back(countSetBits(num));
        }

        if (cntorg == cntsrted) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}