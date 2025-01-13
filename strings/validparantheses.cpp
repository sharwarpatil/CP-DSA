#include<iostream>
#include<stack>
#include<string>
using namespace std;
class Solution {
public:
    bool canBeValid(string s, string l) {
//        int stringLength = parentheses.size();
//         if (stringLength % 2 == 1) {
//             return false;
//         }

//         stack<int> openIndices;
//         stack<int> unlockedIndices;

//         for (int i = 0; i < stringLength; i++) {
//             if (lockedStatus[i] == '0') {
//                 unlockedIndices.push(i);
//             } else if (parentheses[i] == '(') {
//                 openIndices.push(i);
//             } else if (parentheses[i] == ')') {
//                 if (!openIndices.empty()) {
//                     openIndices.pop();
//                 } else if (!unlockedIndices.empty()) {
//                     unlockedIndices.pop();
//                 } else {
//                     return false;
//                 }
//             }
//         }

//         while (!openIndices.empty() && !unlockedIndices.empty() &&
//                openIndices.top() < unlockedIndices.top()) {
//             openIndices.pop();
//             unlockedIndices.pop();
//         }

//         if (openIndices.empty() && !unlockedIndices.empty()) {
//             return unlockedIndices.size() % 2 == 0;
//         }
//         return openIndices.empty();
        int n=s.size();
        if(n%2!=0){
            return false;
    
        }
        
        
        
        int opencount = 0;//checking if ( in open count more than ) in close 
        int closecount=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || l[i]=='0'){
                opencount++;
            }else{ // s[i] == ')' and locked[i] == '1'
                opencount--;
            }
            if(opencount<0){
                return false;
            }

        }
        for(int i=n-1;i>=0;i--){//checking if ) in open count more than ( in close 
            if(s[i]==')' || l[i]=='0'){
                closecount++;
            }else{ // s[i] == '(' and locked[i] == '1'
                closecount--;
            }
            if(closecount<0){
                return false;
            }
            
        }
        
         
        
        return true;
    }
};


int main(){
    Solution s;
    string a,b;
    a="((()(()()))()((()()))))()((()(()";
    b="10111100100101001110100010001001";
    cout<<(s.canBeValid(a,b) ? "Yes":"NO");
    return 0;
}



//wrong sol 
//  int n=s.size();
//         if(n%2!=0){
//             return false;
    
//         }
        

//         for(int i=0;i<n;i++){
//             if(i%2==0 ){
//                 if(s[i]!='(' && l[i]=='1'){
//                     return false;
//                 }
//             }else if(i%2!=0 ){
//                 if(s[i]!=')' && l[i]=='1'){
//                     return false;
                    
//                 }
//             }
//         }
//         int count = 0;
//         for(int i=0;i<n;i++){
//             if(s[i]=='('){
//                 count++;
//             }else{
//                 count--;
//             }
//         }
//         cout<<count<<endl;
//         if(count==0){
//             return true;
//         }   
        
//         return true;