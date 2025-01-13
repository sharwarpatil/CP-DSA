//INORDER   LNR
//POSTORDER NLR
//PREORDER  LRN 
#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int d){
        this->data=d;
        this->right= NULL;
        this-> left= NULL;
    }
};
Node* buildtree(Node* root){
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    
    if (data == -1) {
        return NULL;
    }
    root = new Node(data);

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right=buildtree(root->right);
    return root;
}
void levelordertraversal(Node* root){
    if (root == NULL) {
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        
        q.pop();
        
        if(temp==NULL){//old level completed lvl 0-> 1 ->2 ..
            cout<<endl;
            if(!q.empty()){ //Queue still has some child nodes 
                q.push(NULL);
            }   
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

      
    }
   
}
void inorder(Node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node* root=NULL;
    //creating a tree
    root=buildtree(root);
    //level order
    cout<<"Inorder traversal is : ";
    inorder(root);
    return 0;
}

// 1 2 3 -1 -1 8 4 -1 -1 