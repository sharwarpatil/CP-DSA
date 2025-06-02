#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s); // Use getline to read the full line including spaces
        vector<string> b;
        for(int i=1;i<s.length();i++){
            if(s[0]!=' '){
                b.push_back(string(1,s[0]));
            }else{
                if(s[i]==' ' && s[i+1]!=' '){
                    b.push_back(string(1,s[i+1]));
                }
            }
        }
        for(int i =0 ;i<b.size();i++){
            cout<<b[i];

        }
        cout<<endl;
    }
    
    return 0;
}