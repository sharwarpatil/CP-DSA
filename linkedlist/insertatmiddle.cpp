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
void Insertnode(Node* &tail,int d){
    Node* temp = new Node(d);
    tail-> next = temp;
    tail = temp;
}
void Insertnodepos(Node* &head,int pos,int d){
    if(pos==0){
        Node* nodenew= new Node(d);
        nodenew->next=head;
        head=nodenew;
        return;

    }
    
    Node* temp = head;
    int count = 1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    if(temp == NULL){
        cout<<"Out of bounds "<<endl;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next=nodetoinsert;
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
    Insertnode(tail, 13);
    printdata(head);
    Insertnode(tail, 25);
    printdata(head);
    Insertnodepos(head,1,55);
    return 0;
}