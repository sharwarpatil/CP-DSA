#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int x;cin>>x;// example x=2 n=5
        vector<int> a;
        for(int i=n-1;i>x;--i){ // 4 3
           a.push_back(i); 
         
        }
        for(int i=0;i<x;++i){
           a.push_back(i); // 0 1 2
         
        }
       a.push_back(x);
       for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
       cout<<endl;
    }
    return 0;
}