#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
        int minimumLength(string s) {
            unordered_map<char,int>charCount;
            for( char c : s){
                charCount[c]++;
            }
            int c=0;
            
            for (auto &entry : charCount) {
                // cout << entry.first << " = " << entry.second << endl;
                if(entry.second%2==0){
                    c=c+2;
                }else{
                    c=c+1;
                }
            }
            return c;
        }
    };
int main(){
    Solution s;
    string a;
    a="abaacbcbb";
    
    cout<<s.minimumLength(a);
    return 0;
}
