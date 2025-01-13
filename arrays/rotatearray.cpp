#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& n, int k) {
        vector<int> a(n.size());
        for(int j=0;j<n.size();j++){
                a[(j+k) % n.size()] =n[j];
              
            }
            n=a;
    }
};
int main(){
    Solution S;
    vector<int> rev(5);
    int h=0;
    while(h<5){
        cin>>rev[h];
        h++;
    }
    int m;
    cin>>m;

    S.rotate(rev,m);
     for (int i = 0; i < rev.size(); i++) {
        cout << rev[i] << " " ;
    }
}
