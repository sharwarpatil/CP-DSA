#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3, 3, 3};
    unordered_map<int, int> countMap;

    // Count frequency of each number
    // for (int num : nums) {
    //     countMap[num]++;
    // }

    // Print the result
    // for (auto entry : countMap) {
    //     cout << "Number " << entry.first << " appears " << entry.second << " times." << endl;
    // }
   countMap[3]++;
    cout<<countMap.size()<<endl;
       cout<<countMap[3]<<endl;
    cout<<--countMap[3]<<endl;
    for (auto entry : countMap) {
        cout << "Number " << entry.first << " appears " << entry.second << " times." << endl;
    }
    return 0;
}
