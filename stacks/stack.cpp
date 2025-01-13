#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(2);
    s.push(5);
    s.push(7);
    s.push(1);
    s.push(8);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}