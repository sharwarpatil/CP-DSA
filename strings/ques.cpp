#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
        int minimumLength(vector<int>& s) {
            unordered_map<char,int>charCount;
            for( int c : s){
                charCount[c]++;
            }
            int c=0;
            
            for (auto &entry : charCount) {
                // cout << entry.first << " = " << entry.second << endl;
                if(entry.second!=2){
                    return entry.first;
                }
            }
            return 0;
        }
    };
int main(){
    Solution s;
    vector<int> n={2,2,1,1,3};
    
    cout<<s.minimumLength(n);
    return 0;
}
