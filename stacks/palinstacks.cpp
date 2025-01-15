#include<iostream>
#include<stack>
using namespace std;

bool palindrome(string s){
    stack<char> st;
    for(char c: s){
        st.push(c);
    }

    for(char c: s){
        if(c!=st.top()){
            return false;
        }
        st.pop();
    }
    return true;
}


int main(){
    
    string h;
    h="helleh";
    cout<<(palindrome(h)? "YES" : "NO");

    return 0;
}