#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void Reversal(queue<int> &q){
    stack<int>s;

    //queue to stack
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    //stack to queue
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}
int main(){
    queue<int> org;
    for(int i=1;i<=5;i++){
        org.push(i);
    }
    Reversal(org);
    for(int i=1;i<=5;i++){
        cout<<org.front()<<" ";
        org.pop();
    }
    cout<<endl;
    return 0;
}
