#include<iostream>
#include<stack>
using namespace std;
class Solution{
    public:
    stack<int> one,two;
    void insert(int e){
        while(!one.empty()){
            two.push(one.top());
            one.pop();
        }
    }
    void pop(){
        
    }
};

int main(){
    Solution S;
    S.insert(5);

     
}