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

 void pop_front(){
    Node* temp =head;
    head=head->next;

    if(head!=NULL){
        head->prev=NULL;
    }
    temp->next=NULL;
    delete temp;
 }

 void push_back(int val){
    Node* newNode= new Node(val);
    if(head==NULL){
        head=tail=newNode;
    }else{
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }
 }

 void pop_back(){
    //Empty list
    if(head==NULL){
        return;
    }
    //Single node
    if(head==tail){
        delete tail;
        head=tail=NULL;
        return;
    }
    Node* temp=tail;
    tail=tail->prev;
    tail->next=NULL;
    delete temp;
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
    dbll.pop_front();
    dbll.printList();
    dbll.push_back(5);
    dbll.printList();
    dbll.pop_back();
    dbll.printList();
    

     return 0;
}