#include<iostream>
#include<climits>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int n = 0;
        
        while (x != 0) {
            int digit = x % 10;
            
            if (n > INT_MAX/10 || n < INT_MIN/10) {
                return 0;
            }
            
            if (n == INT_MAX/10 && digit > INT_MAX % 10) {
                return 0;
            }
            if (n == INT_MIN/10 && digit < INT_MIN % 10) {
                return 0;
            }
            
            n = n * 10 + digit;
            x /= 10;
        }
        
        return n;
    }
};
int main(){
    Solution S;
    int rev;
    cin>>rev;
    int x=0;
    

    cout<<S.reverse(rev);
}