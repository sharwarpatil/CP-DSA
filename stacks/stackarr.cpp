#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        this->size= size;
        top=-1;
        arr=new int[size];
    }
    void push(int element){
        if(top==size-1){
            cout<<"Overflow"<<endl;
        }else{
            top++;
            arr[top]=element;
        }
    }
     void pop(int element){
        if(top<0){
            cout<<"Underflow"<<endl;
        }else{
            top--;
        }
    }

};
int main(){
    Stack s(5);
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);
}
