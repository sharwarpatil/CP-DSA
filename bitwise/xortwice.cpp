#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    // Function to count duplicates with the same frequency
    int countDuplicatesWithSameFrequency(vector<int>& n) {
        unordered_map<int, int> frequencyMap;

        // Step 1: Count the frequency of each number
        for (int num : n) {
            frequencyMap[num]++;
        }

        // Step 2: Track how many numbers have the same frequency
        unordered_map<int, int> freqCountMap;

        for (const auto& entry : frequencyMap) {
            if (entry.second > 1) {  // We're interested only in duplicates
                freqCountMap[entry.second]++;
            }
        }

        // Step 3: Output the count of duplicates with the same frequency
        int totalDuplicates = 0;
        for (const auto& entry : freqCountMap) {
            cout << "Frequency " << entry.first << " has " << entry.second << " numbers with this frequency." << endl;
            totalDuplicates += entry.second;
        }

        return totalDuplicates;  // Return the total count of numbers with the same frequency
    }
};

// Test case
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 3, 4, 4};
    cout << "Total duplicates with same frequency: " << sol.countDuplicatesWithSameFrequency(nums) << endl;
    return 0;
}
