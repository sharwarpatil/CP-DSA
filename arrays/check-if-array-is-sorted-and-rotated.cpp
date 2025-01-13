#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    bool check(vector<int>& n) {
        // vector<int> sorted=n;
        // vector<int> a(n.size());
        // sort(n.begin(),n.end());
        // int i=0;
        // while(i<n.size()){
        //     for(int j=0;j<n.size();j++){
        //         a[j] =n[(j+i) % n.size()];
        //     }
        //     if(a==sorted){
        //         return true;
        //     }
        //     i++;

        // }
        // return false;
        int count=0;
        for(int i=1;i<n.size();i++){
            if(n[i-1]>n[i]){
                count++;
            }
        }
        if (n[n.size() - 1] > n[0]){
            count++;
        }
            
        if(count>1){
            return false;
        }else{
            return true;
        }
        return false;
    }
};
int main(){
    Solution S;
    vector<int> rev(5);
    int k=0;
    while(k<5){
        cin>>rev[k];
        k++;
    }
    

    cout<<(S.check(rev) ? "YES" : "NO");
}