//Building Trie data structure
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
        if(temp->children.count(key[i]) == 0){
            temp->children[key[i]] = new Node(); //Insert new key
        }
        temp=temp->children[key[i]];
    }

    temp->endOfword =true;
   }  
   
   
   bool search(string key){
       Node* temp=root;

    for(int i=0;i<key.size();i++){
        if(temp->children.count(key[i])){
           temp=temp->children[key[i]];
        }else{
            return false;
        }
    }    

    return temp->endOfword ;
   }
      
};


int main(){
    vector<string> words={ "the" ,"a" ," there","any","thee"};
     Trie trie;

     for (string word : words) {
        trie.insert(word);
    }

     cout<<trie.search("the")<<endl;
    return 0;
}
