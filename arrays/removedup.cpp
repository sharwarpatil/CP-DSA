// class Solution {
// public:
//     int removeDuplicates(vector<int>& n) {
//         vector<int> a(0);
//         a.push_back(n[0]);
//         for(int i=1;i<n.size();i++){
//             if(n[i-1]!=n[i]){
                
//                  a.push_back(n[i]);
//             }
//         }
//         n=a;
//         return a.size();
//     }
// };

#include <vector>
#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> findAnswer(int n, vector<int>& A) {
        vector<int> arr(n, 0);
        
        for (int i = n-1; i >= 0; i--) {
            long long tempSum = 0;
            bool found = false;
            
            // Optimization for single positive element
            if (A[i] > 0) {
                arr[i] = 1;
                continue;
            }
            
            // Use information from previous calculation
            if (i < n-1 && arr[i+1] > 0) {
                tempSum = A[i];
                for (int j = i+1; j < min(i + arr[i+1] + 1, n); j++) {
                    tempSum += A[j];
                    if (tempSum > 0) {
                        arr[i] = j - i + 1;
                        found = true;
                        break;
                    }
                }
            } else {
                for (int j = i; j < n; j++) {
                    tempSum += A[j];
                    if (tempSum > 0) {
                        arr[i] = j - i + 1;
                        found = true;
                        break;
                    }
                }
            }
            
            if (!found) {
                arr[i] = 0;
            }
        }
        return arr;
    }
};

int main() {
    Solution sol;
    int n = 53243;
    
    // Test Case 1: Mostly negative with some positive numbers
    vector<int> A(n, -1);
    // Place some positive numbers strategically
    
    cout << "Testing with n = " << n << endl;
    
    try {
        vector<int> result = sol.findAnswer(n, A);
        
        // Print first few elements
        cout << "First 5 elements: ";
        for(int i = 0; i < 5; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
        
        // Print elements around first positive number
        cout << "Around index 1000: ";
        for(int i = 998; i < 1003; i++) {
            if(i >= 0 && i < n)
                cout << result[i] << " ";
        }
        cout << endl;
        
        // Print last few elements
        cout << "Last 5 elements: ";
        for(int i = n-5; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
        
        // Verify solution correctness
        bool correct = true;
        for(int i = 0; i < n; i++) {
            if(result[i] > n) {
                correct = false;
                cout << "Error at index " << i << ": value " << result[i] << " exceeds n" << endl;
                break;
            }
        }
        if(correct) {
            cout << "All values are within valid range" << endl;
        }
        
    } catch(const exception& e) {
        cout << "Runtime error occurred: " << e.what() << endl;
    }
    
    return 0;
}