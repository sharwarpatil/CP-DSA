#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    ios::sync_with_stdio(false),cin.tie(0);
    string s = "abcabcdd";
    int n = s.size();
    int r=0,l=0,maxlen=0;
    unordered_map<char,int> x;
    while(r<n){
        int curr=s[r];
        x[curr]++;
        while(x[curr]>1){
            x[s[l]]--;
            l++;
        }
        maxlen=max(maxlen,r-l+1);
        r++;
    }
    cout<<maxlen;
    return 0;
}