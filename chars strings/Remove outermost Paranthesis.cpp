
#include <iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
       
        vector<char> s2;
        int i=0;
        while(i<s.length()){
            if(s[i]=='('){
                int n=1;
                int j=i;
                while(n!=0){
                   if(s[j+1]=='('){
                       s2.push_back(s[j+1]);
                       n++;
                   }else if(s[j+1]==')' && n!=1){
                       s2.push_back(s[j+1]);
                       n--;
                   }else{
                       n--;
                   }
                   j++;
                }
                i=j+1;
                
            }
        }
        return string(s2.begin(), s2.end());
    }
};

int main()
{
    std::cout<<"Hello World";
    Solution S1;
    string s;
    cin>>s;
    string s3=S1.removeOuterParentheses(s);
    cout<<s3;
    return 0;
}