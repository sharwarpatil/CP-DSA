#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minimizeXor(int num1, int num2) {
        vector<int> v1;
    while (num2 > 0) {

        v1.push_back(num2 % 2);
        num2 = num2 / 2;
    }
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<endl;
        }
        return num1;
    }
};
int main(){
    Solution s;
    int a=3,b=7;
    s.minimizeXor(a,b);
}