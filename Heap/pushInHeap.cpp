#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Heap{
  vector<int> vec;  //CBT max heap
  public:
  void push(int val){
   //step 1
   vec.push_back(val);

   //fix heap
   int x = vec.size()-1;
   int parI= (x-1)/2;

   while(parI>=0 && vec[x]>vec[parI]){  //for min heap vec[x]<vec[parI])
    swap(vec[x],vec[parI]);
    x=parI;
    parI=(x-1)/2;
   }
  }

  void pop(){
    
  }
  int top(){
   return vec[0];
  }
  bool empty(){
    return vec.size()==0;
  }
 
};
int main(){
    Heap heap;
    heap.push(50);
    heap.push(10);
    heap.push(100);
    cout<<"top:"<<heap.top()<<endl;


    return 0;
}