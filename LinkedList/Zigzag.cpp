
#include<iostream>
using namespace std;
  class Node{
    public:
    int data;
    Node* next;
  public:
    Node(int val){
        data=val;
        next=NULL;
    }
  };

  class List{
    public:
     Node* head;
     Node* tail;

    public:
    List(){
        head=NULL;
        tail=NULL;
    }

    void push_front(int val){
        Node* newNode= new Node(val);

        if(head == NULL){
            head=tail=newNode;
        }else{
            newNode->next = head;
            head=newNode;
        }
    }

    void push_back(int val){
        Node* newNode= new Node(val);

        if(head == NULL){
            head=tail=newNode;
        }else{
            tail->next= newNode;
            tail=newNode;
        }
    }
};  

    void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

Node* splitAtMid(Node* head){
    Node* slow=head;
    Node* fast=head;
    Node* prev=NULL;

    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }

    if(prev != NULL){
        prev->next=NULL; //Split at mid
    }
  return slow;  //slow=righthead
}

Node* merge(Node* left, Node* right){
     List ans;
     Node* i=left;
     Node* j=right;

     while(i!=NULL && j!=NULL){
        if(i->data <= j->data){
            ans.push_back(i->data);
            i=i->next;
        }else{
            ans.push_back(j->data);
            j=j->next;
        }
     }

     while(i!=NULL){
        ans.push_back(i->data);
        i=i->next;
     }
     while(j!=NULL){
        ans.push_back(j->data);
        j=j->next;
     }
  return ans.head;
}

Node* mergeSort(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* righthead= splitAtMid(head);
    Node* left= mergeSort(head); //left head
    Node* right=mergeSort(righthead); //right head;
   return  merge(left,right);
}

Node* reverse(Node *head){
Node* prev=NULL;
Node* curr=head;
Node* next=NULL;
while(curr!=NULL){
    next=curr->next;
    curr->next=prev;

    prev=curr;
    curr=next;
}
return prev;
}

Node* Zigzag(Node* head){
    Node* righthead = splitAtMid(head);
    Node* rightheadRev= reverse(righthead);

    //Alternate merging

    Node* left= head;
    Node* right= rightheadRev;
    Node* tail= right;
    while(left !=NULL && right !=NULL){
        Node* nextleft= left->next;
        Node* nextRight= right->next;

        left->next = right;
        right->next = nextleft;

        tail = right;

        left= nextleft;
        right= nextRight;
    }
    if(right != NULL){
       tail->next = right;

    }
 return head;
}
int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2); 
    ll.push_front(1); 
    printList(ll.head);
    ll.head=Zigzag(ll.head);
    printList(ll.head);
    return 0;
}