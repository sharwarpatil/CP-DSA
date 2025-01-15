#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxFrequency(vector<int>& n, int k) {
        vector<int> m;
        int i = 1;
        while (i < n.size()) {
            m.push_back(n[i] - n[i - 1]);
            i++;
        }
        sort(m.begin(), m.end());

        int sum = 0;
        int count = 0;
        
            for (int j = 0; j < m.size(); j++) {
                sum = sum + m[j];
                if (k >= sum) {
                count++;
                }
            }
           
            count=count + 1;
        return count;
    }
};

int main(){
    vector<int> v={1,2,4};//3 4 5  sum=3 c=1
    int k=5;
    Solution s;
    cout<<"Ans -"<<s.maxFrequency(v,k);
}