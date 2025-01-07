    #include<iostream>
    using namespace std;

    class Node{
        public:
        int data;
        Node* next;

        //constructor
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
        //destructor
        ~Node(){
            int value= this->data;
            if(this->next!=NULL){
                delete next;
                this->next=NULL;
            }
            cout<<"memory is free for data of value"<<value<<endl;
        }
    };

    void deletenode(Node* &head,int pos){

        if (head == NULL) {//if list is empty
        cout << "The list is empty. Nothing to delete." << endl;
        return;
        }
        if(pos==1){ //deleting 1st element
            Node* temp = head;
            head=head->next;
            temp->next =NULL; // the deleted node is still pointing the next node to removing it
            delete temp;

        }else{//deleting middle or last
            Node* curr = head;
            Node* prev = NULL;
            int count=1;
            while(count<pos){
                prev=curr;
                curr=curr->next;
                count++;
            }
            prev->next=curr->next;
            curr->next =NULL; // the deleted node is still pointing the next node to removing it
            delete curr;
            cout << "Node at position " << pos << " deleted." << endl;
        }
        
    }
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
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;

    cout << "Initial list:" << endl;
    printdata(head);

    Insertnode(head, 13);
    Insertnode(head, 19);
    Insertnode(head, 49);

    cout << "List after insertion:" << endl;
    printdata(head);

    deletenode(head, 2);

    cout << "List after deleting node at position 2:" << endl;
    printdata(head);

    deletenode(head, 1);

    cout << "List after deleting node at position 1:" << endl;
    printdata(head);

    deletenode(head, 5); // Attempting to delete out-of-bounds position

    return 0;
}
