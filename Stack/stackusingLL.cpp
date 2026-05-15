#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;

//Create stack using Linked list
template<class T>
class Node{
 public:    
    T data;
    Node* next;
 
    Node(T val){
    data=val;
    next=NULL;
 }    
};


template<class T>
class Stack{
    Node<T>* head;
    public:
    Stack(){
        head=NULL;
    }
    void push(T val){
     //Push at front
     Node<T>* newNode=new Node<T>(val);
     if(head==NULL){
        head=newNode;
     }else{
        newNode->next=head;
        head=newNode;
     }
    }
    void pop(){
      //Pop at front
      Node<T>* temp=head;
      head=head->next;
      temp->next=NULL;
      delete temp;
    }

    T top(){
        return head->data;
    }
    
    bool is_Empty(){
        return head==NULL;
    }

};

int main(){
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.is_Empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}