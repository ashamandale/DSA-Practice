#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

class Node{
    public:
    unordered_map<char,Node*> children;
    bool endOfword;
    Node(){
        endOfword=false;
    }
};   

class Trie{
        Node* root;
    public:
      Trie(){
        root = new Node();
      }   
   void insert(string key){
    Node* temp=root;

    for(int i=0;i<key.size();i++){
        if(temp->children.count(key[i] == 0)){
            temp->children[key[i]] = new Node(); //Insert new key
        }
        temp=temp->children[key[i]];
    }

    temp->endOfword =true;
   }  
   
   
   void search(string key){
    
   }
      

};


int mian(){
    vector<string> words={ "the" ,"a" ," there","any","thee"};
     Trie trie;
    return 0;
}