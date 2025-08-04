// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<unordered_map>
// using namespace std;
// int main(){
//     int t;cin>>t;
//     while(t--){
//         unordered_map<int,int> count;
//         int n,j,k;cin>>n>>j>>k;
//         vector<int> a(n),b;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }

//         int f = a[j-1];
//         for(int x : a){
//             count[x]++;
//         }
//         for(auto i : count){
//             b.push_back(i.first);
            
        
//         }
//         bool te=false;
//         sort(b.begin(),b.end());
//          for(int i=0;i<b.size();i++){
            
//             if(b[i]==f){
//                 if(b.size()-k-1<=i){
//                     te = true;
//                 }
//             }
//         }
//         if(te==true){
//             cout<<"YES"<<endl;
//         }else{
//              cout<<"NO"<<endl;
//         }
//     }
     
    

//     return 0;
// }

// wrong approch //thinking wrong 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n), b;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int f = a[j-1];
        sort(a.begin(),a.end());
        if(k>1){
            cout<<"YES"<<endl;
        }else{
            if(a[n-1]==f){
                 cout<<"YES"<<endl;
            }else{
                 cout<<"NO"<<endl;
            }
        }
      


        

      
    }
    return 0;
}
