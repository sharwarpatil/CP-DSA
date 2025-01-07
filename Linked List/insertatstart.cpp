#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};
void Insertnode(Node* &head,int d){
    Node* temp = new Node(d);
    temp-> next = head;
    head = temp;
}

void printdata(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1= new Node(2);
    cout<<node1->data<<" "<<node1->next<<endl;
    Node* head = node1;
    Node* tail = node1;
    printdata(head);
    Insertnode(head,13);
    printdata(head);
    cout<<head<<" "<<tail;
}