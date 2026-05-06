#include<iostream>
using namespace std;
class Node{
public: 
 int data;
 Node* next;
 Node* prev;

 Node(int val){
    data=val;
    prev=next=NULL;
 }
};

class doublyLL{
    public:
    Node* head;
    Node* tail;
    
 doublyLL(){
    head=tail=NULL;
 }   

 void push_front(int val){
    Node* newnode= new Node(val);

    if(head==NULL){
        head=tail=newnode;
    }else{
        newnode->next=head;
        head->prev=newnode;
        head = newnode;
    }
 }

 void printList(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" <=> ";
        temp=temp->next;
    }
    cout<<"NULL\n";
 }

};
int main(){
    doublyLL dbll;
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);
    dbll.printList();
    

     return 0;
}