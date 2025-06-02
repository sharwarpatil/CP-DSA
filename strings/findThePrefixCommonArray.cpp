#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        unordered_map<int, int> charcounta;
        unordered_map<int, int> charcountb;
        vector<int> mn;

        for (int num : a) {
            charcounta[num]++;
        }
        for (int num : b) {
            charcountb[num]++;
        }
    
        for (auto &entry : charcounta) {
            int num = entry.first;
            if (charcountb.find(num) != charcountb.end() && charcountb[num] == entry.second) {
                mn.push_back(num);
            }
        }

        return mn;
    }
};
int main() {
    Solution sol;
    vector<int> a = {1, 2, 2, 3, 4};
    vector<int> b = {2, 2, 3, 4, 5};
    vector<int> result = sol.findThePrefixCommonArray(a, b);

    cout << "Common elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
