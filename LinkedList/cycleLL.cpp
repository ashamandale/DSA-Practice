
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

    ~ Node(){
        //cout<<" ~ Node" <<data<<endl;
        if(next !=NULL){
            delete next;
            next=NULL;
        }
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

    ~ List(){
        //cout<<"~ List \n";
        if(head != NULL){
            delete head;
            head=NULL;
        }
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

bool isCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while( fast!=NULL && fast->next!= NULL){
        slow=slow->next;  //+1
        fast=fast->next->next;  //+2

        if(slow==fast){
            cout<<"Cycle Exist";
            return true;
        }
    }
    cout<<"Cycle doesn't exist";
    return false;   

}
int main(){
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1); 

    ll.tail->next=ll.head; //1->2->3->4->1
    isCycle(ll.head);
    
    return 0;
}