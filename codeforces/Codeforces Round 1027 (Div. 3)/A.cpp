#include <iostream>
#include <string>
#include <cmath>  
#include <cstdlib> 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int n = stoi(s); 
        int r = sqrt(n);
        if (r * r == n) {
        
                int a = rand() % (r + 1);  // a ∈ [0, r]
                int b = r - a;
                cout << a << " " << b << endl;
        
    } else {
        cout << -1  << endl;
    }
    
    }
   

    return 0;
}
