#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int sarr(vector<int>& n, int k) {
        int count=0;
        for(int i=0;i<n.size();i++){
            int sum=0;
            
            for(int j=i;j<n.size();j++){
                
                cout<<n[j];
                    sum=sum+n[j];
                
            
        }   
        // cout<<sum<<endl;
        cout<<endl;
        if(sum==k){
            count++; 
        }
        
        }
        // cout<<count<<endl;
        return count;
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
    cout<<"k val - ";
    cin>>m;

    S.sarr(rev,m);
}


i=0 j=i(0) j++
1
12
...
12345

i=1
j=i(1) j++
2
23