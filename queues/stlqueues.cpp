#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(5);
    q.push(3);
    q.push(7);
    cout<<"Size of queue is -"<<q.size()<<endl;
    q.pop();
    cout<<"Size of queue is -"<<q.size()<<endl;
    q.pop();
    q.pop();
    cout<<" queue is empty or not -"<<(q.empty()?"YES":"NO")<<endl;
}
