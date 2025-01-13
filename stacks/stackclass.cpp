#include<iostream>
using namespace std;
//using array
class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;
    //behaviour
    Stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
    }
    void push(int element){
        if(top==size-1){
            cout << "Stack overflow. Unable to push element " << element << endl;
        }else{
            top++;
            arr[top]=element;
            cout << "Pushed " << element << " to the stack." << endl;
        }
    }
    void pop(){
        if(top<0){
            cout<<"Stack underflow"<<endl;
        }else{
            cout << "Popped " << arr[top] << " from the stack." << endl;
            top--;
        }
    }
    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }
    // Destructor to free dynamically allocated memory
    ~Stack() {
        delete[] arr;
    }
};

int main(){
    // Stack st=new Stack();//new is used only for dynamically allocating the pointer
    Stack st(5);
    st.push(2);
    cout<<"Top element -"<<st.peek()<<endl;
    st.pop();
    cout<<"Top element -"<<st.peek()<<endl;
    cout<<"Is stack empty ?"<<(st.isEmpty()?"Yes":"No")<<endl;
    st.push(1);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(9);
    st.push(8);

    cout<<"Top element -"<<st.peek()<<endl;

}