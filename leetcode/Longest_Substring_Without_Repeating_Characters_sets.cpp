#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int main(){
    ios::sync_with_stdio(false),cin.tie(0);
    string s = "abcabcdd";
    int n = s.size();
    int r=0,l=0,maxlen=0;
    unordered_set<char> x;
    while(r<n){
        while (x.find(s[r]) != x.end())
        {
            x.erase(s[l]);
            l++;
        }
        x.insert(s[r]);
        maxlen=max(maxlen,r-l+1);
        r++;
    }
    cout<<maxlen;
    return 0;
}