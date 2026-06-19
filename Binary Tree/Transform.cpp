
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        left=right=NULL;
    }    
};
static int idx = -1;
     Node* buildTree(vector<int> nodes){
      idx++;
      if(nodes[idx]==-1){
        return NULL;
      }
      Node* currNode =new Node(nodes[idx]);
      currNode->left=buildTree(nodes);
      currNode->right=buildTree(nodes);

    return currNode;
    }

int transform(Node* root){

    if(root== NULL){
        return 0;
    }
    int leftOld=transform(root->left);
    int righttOld=transform(root->right);
    int currOld=root->data;

    root->data= leftOld +righttOld ;

    if(root->left != NULL){
        root->data += root->left->data;
    }

    if(root->right != NULL){
        root->data += root->right->data;
    }
    return currOld;

}

 void preOrder(Node* root){
       
        if(root== NULL){
            return;
        }
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }

int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(nodes);
   transform(root);
   preOrder(root);

}
