#include<iostream>
using namespace std;
class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
   
    Queue(){
        size=1000;
        arr= new int[size];
        rear=0;
        front=0;
    }

    void enqueue(int d){
    if(rear==size){
        cout<<"Queue is full";
    }else{
        arr[rear]=d;
        rear++;
    }
}
void dequeue(){
    if(front==rear){
        cout<<"Queue is empty";
    }else{
        arr[front]=-1;
        front++;
        if(front==rear){
            rear=0;
            front=0;
        }
    }
}
bool isEmpty(){
    if(rear==front){
        return true;
    }else{
        return false;
    }
}
void print(){
    int i=front;
    cout<<"Queue is - ";
    while (i<rear)
    {
        cout<<arr[i]<<" ";
        i++;
    }
    
}
};
int main(){
    Queue q;
    q.enqueue(4);
    q.enqueue(7);
    q.enqueue(8);
    q.dequeue();
    q.isEmpty() ? cout << "Queue is empty\n" : cout << "Queue is not empty\n";

    q.print();
}