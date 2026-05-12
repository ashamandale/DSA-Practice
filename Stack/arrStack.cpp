#include<iostream>
#include<vector>
using namespace std;
//creating stack using Array
class Stack{
 int arr[100];
 int topIdx;
 public:
 Stack(){
    topIdx=-1;
 }

//Push Element
 void push(int val){
   if(topIdx==99){
    cout<<"Stack Overflow...\n";
    return;
   }
 topIdx++;
 arr[topIdx]=val;
}

//Pop Element
 void pop(){
    if(isEmpty()){
        cout<<"Stack is UnderFlow...";
        return;
    }
    topIdx--;
 }

 int top(){
    if(isEmpty()){
        cout<<"Stack is Empty...";
        return -1;
    }
    
    return arr[topIdx];
 }

 bool isEmpty(){
    return topIdx == -1;
 }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }



    return 0;

}