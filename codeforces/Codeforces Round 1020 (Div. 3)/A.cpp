#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int count =0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count= count + (n-1);
              
            }else{
                count+=1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}